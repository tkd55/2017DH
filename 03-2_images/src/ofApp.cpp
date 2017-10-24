#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // 画像ファイルの読み込み
    misoda.load("images/misoda.png");
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 座標系の原点の移動
    // 原点の位置を指定した場所に移動
    ofTranslate(ofGetWidth()/2 - misoda.getWidth()/2, ofGetHeight()/2 - misoda.getHeight()/2);
    misoda.draw(0, 0);
    
    // リサイズ
//    misoda.draw(300, 100, misoda.getWidth() * 2, misoda.getHeight() * 2);
    
    // スケール
//    ofScale(0.5, 0.5);
//    misoda.draw(ofGetWidth()/2, ofGetHeight()/2);
    

    // 回転
//    ofRotateZ(30);
//    misoda.draw(ofGetWidth()/2, ofGetHeight()/2);
    
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofRotateZ(deg);
//    misoda.draw(0, 0);
    
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
