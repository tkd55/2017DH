#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(0, 0, 0);
    
    // 円の角の数
    ofSetCircleResolution(64);
    
    // 円の初期の座標
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/2;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    position.x = position.x + (click.x - position.x)/10;
    position.y = position.y + (click.y - position.y)/10;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);
    ofDrawCircle(position.x, position.y, 100);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    // 円の中心の位置がマウスの位置
//    position.x = x;
//    position.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    // 円の中心の位置がマウスをドラッグしているの位置
//    position.x = x;
//    position.y = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    click.x = x;
    click.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    // 円の中心の位置がマウスを離した位置
//    position.x = x;
//    position.y = y;
    
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
