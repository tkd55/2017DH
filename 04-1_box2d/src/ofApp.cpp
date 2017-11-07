#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Box2Dの世界の設定
    box2d.init();                   // 初期化
    box2d.setGravity(0, 10);        // 重力
    box2d.createBounds();           // 画面の周囲に壁を作成
    box2d.setFPS(30.0);             // box2Dの世界でのFPS
    box2d.registerGrabbing();       // 物体をつかめるようにする
    
    for(int cnt=0; cnt<20; cnt++){
        // 円の物理パラメータを設定
        // 第一引数 : 密度（比重）
        // 第二引数 : 反発係数
        // 第三引数 : 摩擦係数
        circles[cnt].setPhysics(3.0, 0.53, 0.1);
        
        // box2dの世界に追加する円の設定
        float x = ofRandom(40, ofGetWidth() - 40);
        float y = ofRandom(40, ofGetHeight() - 40);
       
        circles[cnt].setup(box2d.getWorld(), x, y, 40); // 円を物理世界に追加
    }
    
    misoda.load("images/misoda.png");
    misoda.setAnchorPercent(0.5, 0.5);

}

//--------------------------------------------------------------
void ofApp::update(){
    box2d.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofSetColor(0, 127, 255);
//    for(int cnt=0; cnt<20; cnt++){
//        circles[cnt].draw();              // ÂÜÜ„ÅÆÊèèÁîª
//    }
    
//    for(int cnt=0; cnt<circles.size(); cnt++){
//        circles[cnt].get()->draw();
//    }
    
    for(int cnt=0; cnt<20; cnt++){
        ofPushMatrix();

            ofTranslate(circles[cnt].getPosition().x, circles[cnt].getPosition().y, 0);
            ofRotate(circles[cnt].getRotation());
            misoda.draw(0, 0);
        
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
    
//    circles.push_back(shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle));
//    circles.back().get()->setPhysics(3.0, 0.53, 0.1);
//    circles.back().get()->setup(box2d.getWorld(), x, y, ofRandom(3, 50));
    
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
