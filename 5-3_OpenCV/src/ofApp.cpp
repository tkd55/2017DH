#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
    int windowWidth = ofGetWidth();
    int windowHeight = ofGetHeight();
    
    cam.initGrabber(1024, 768);
    
    colorImg.allocate(1024, 768);
    
    grayImg.allocate(1024, 768);

    
    grayBg.allocate(1024, 768);
    grayDiff.allocate(1024, 768);

    threshold = 100;
    
    isSave = true;
    
    ofEnableSmoothing();
    
    
    // Box2dの世界の設定
    box2d.init();               // 初期化
    box2d.setGravity(0, 9.8);   // 重力
//    box2d.createBounds();       // Windowの上下左右に壁を作る
//    box2d.createGround();       // 床（下にだけ壁）を作る
    box2d.setFPS(30);           // FPSの設定
//    box2d.registerGrabbing();   // 物体をつかめる
    
    
    // 円、１つ１つに対してパラメータを設定
    for(int cnt=0; cnt<100; cnt++){
        // 第一引数 : 密度（比重）
        // 第二引数 : 反発係数
        // 第三引数 : 摩擦
        circles[cnt].setPhysics(10.0, 0.53, 5);
        
        // Box2dの世界で設定
        float x = ofRandom(40, ofGetWidth() - 40);
        float y = ofRandom(40, ofGetHeight()/2);
        circles[cnt].setup(box2d.getWorld(), x, y, 10);
    }
    
    
    // エリアの箱を作成
    for(int j = 0; j < BOLB_NUM; j++){
        edges[j] = ofPtr<ofxBox2dPolygon>(new ofxBox2dPolygon);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    
    colorImg.setFromPixels(cam.getPixels().getData(), 1024, 768);
    
    colorImg.mirror(false, true);
    
    colorImg.blur();
    
    grayImg = colorImg;
    
    if(isSave == true){
        grayBg = grayImg;
        isSave = false;
    }
    grayDiff.absDiff(grayBg, grayImg);
    
    grayDiff.threshold(threshold);
    
    contourFinder.findContours(grayDiff, 20, (ofGetWidth()*ofGetHeight())/4, 10, false);
 
    
    // 物理計算の更新
    box2d.update();
    
    int numEdges = contourFinder.nBlobs;
    for (int j = 0; j < 10; j++) {
        
        // 古い情報を削除
        edgeLines[j].clear();
        edges[j].get()->clear();
        
        // 10個よりも小さい場合があるので
        if (j < numEdges) {
            //  make a contour
            for (int k = 0; k < contourFinder.blobs[j].pts.size(); k++) {
                edgeLines[j].addVertex(contourFinder.blobs[j].pts[k]);
            }
            
            edgeLines[j].close();
            edgeLines[j].simplify();
            
            //  make a polygon
            edges[j].get()->addVertexes(edgeLines[j]);
            edges[j].get()->create(box2d.getWorld());
        }
    }
    
    

    
    // 下まで行ったら上に戻す処理
    for(int cnt=0; cnt<20; cnt++){
        // 画面外のエリアに到達した場合
        if(circles[cnt].getPosition().y > ofGetHeight() + 5050){
            // 上に戻す
            circles[cnt].setPosition(ofRandom(40, ofGetWidth() - 40), -300);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    colorImg.draw(0, 0);
//    
//    grayImg.draw(330, 0);
//    
//    grayBg.draw(0, 250);
//    
//    grayDiff.draw(330, 250);
//    
//    // Ëº™ÈÉ≠Á∑öË°®Á§∫
//    contourFinder.draw(340, 500);
    
    ofSetColor(255, 255, 255);
    colorImg.draw(0, 0, ofGetWidth(), ofGetHeight());
 
    ofSetLineWidth(5);
    ofSetColor(255, 0, 0);
    for(int cnt=0; cnt<10; cnt++){
        edgeLines[cnt].draw();
    }
    
    
    ofSetColor(255, 255, 255);
    for(int cnt=0; cnt<100; cnt++){
        // 物理演算結果が適応された円の描画
        circles[cnt].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        isSave = true;
    }
        
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
