#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面の基本設定
    ofSetFrameRate(60);
    
    // Box2Dの世界の設定
    box2d.init();                   // 初期化
    box2d.setGravity(0, 10);        // 重力
    box2d.createBounds();           // 画面の周囲に壁を作成
    box2d.setFPS(30.0);             // box2Dの世界でのFPS
    box2d.registerGrabbing();       // 物体をつかめるようにする
    
    // 画像の読み込み
    misoda.load("images/misoda.png");
    misoda.setAnchorPercent(0.5, 0.5);
}

//--------------------------------------------------------------
void ofApp::update(){
    box2d.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int cnt=0; cnt<rects.size(); cnt++){
        ofPushMatrix();

//            ofSetColor(255, 0, 0);
//            rects[cnt].get()->draw();
//        
//            ofSetColor(255, 255, 255);
            ofTranslate(rects[cnt].get()->getPosition().x, rects[cnt].get()->getPosition().y, 0);
            ofRotate(rects[cnt].get()->getRotation());
            misoda.draw(0, 0, rects[cnt].get()->getWidth(), rects[cnt].get()->getHeight());
        
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
    
    rects.push_back(ofPtr<ofxBox2dRect>(new ofxBox2dRect));
    rects.back().get()->setPhysics(3.0, 0.53, 0.1);
    rects.back().get()->setup(box2d.getWorld(), x, y, misoda.getWidth()/2, misoda.getHeight()/2);

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
