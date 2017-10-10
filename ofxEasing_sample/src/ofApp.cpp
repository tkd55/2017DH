#include "ofApp.h"
#include "ofxEasing.h"

//--------------------------------------------------------------
void ofApp::setup(){
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/2;
}

//--------------------------------------------------------------
void ofApp::update(){
    float initTime = ofGetElapsedTimef();
    
    auto duration = 1.f;
    auto endTime = initTime + duration;
    auto now = ofGetElapsedTimef();
    distPosition.x = ofxeasing::map_clamp(now, initTime, endTime, 0, distPosition.x, "linear");
    distPosition.y = ofxeasing::map_clamp(now, initTime, endTime, 0, distPosition.y, "linear");

}

//--------------------------------------------------------------
void ofApp::draw(){

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
    distPosition.x = x;
    distPosition.y = y;
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
