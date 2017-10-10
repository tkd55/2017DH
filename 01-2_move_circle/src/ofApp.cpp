#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    x = 0;
    y = ofGetHeight()/2;
    
    speed = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
//    x = x + 5;
    x = x + speed;
    
//    if(ofGetWidth() < x || x < 0){
    if(ofGetWidth() < x){
        speed = (-1) * speed;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawCircle(x, y, 100);
    
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
