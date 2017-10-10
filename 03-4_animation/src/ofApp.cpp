#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(64);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
        ofSetColor(0, 0, 0);
        // 原点が左上だったものを右方向に200, 下方向に200移動
        ofTranslate(200, 200);
        // (0, 0)の位置に描画するため結果的に(100, 100)の位置
        ofDrawCircle(0, 0, 100);
    
        // これだと200 -> 300で、結局(500, 500)の位置にでる
//        ofSetColor(255, 0, 0);
//        ofTranslate(300, 300);
//        ofDrawCircle(0, 0, 100);

    ofPopMatrix();

    ofPushMatrix();
        ofSetColor(255, 0, 0);
        ofTranslate(300, 300);
        ofDrawCircle(0, 0, 100);
    ofPopMatrix();
    

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
