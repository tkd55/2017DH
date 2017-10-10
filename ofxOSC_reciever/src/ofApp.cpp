#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofBackground(255, 255, 255);
    
    receiver.setup(PORT);
    
    position.x = ofGetWidth()/4;
    position.y = ofGetHeight()/4;
    
    ofSetCircleResolution(64);
    
    color.set(0, 0, 0);
    radius = 50;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    while(receiver.hasWaitingMessages()){
        ofxOscMessage msg;
        receiver.getNextMessage(msg);
        
        if(msg.getAddress() == "/mouse/press"){
//            position.x = msg.getArgAsInt(0);
//            position.y = msg.getArgAsInt(1);
            color.set(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
        }
        
        if(msg.getAddress() == "/circle/radius"){
            radius = msg.getArgAsInt(0);
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(0 < position.x && 0 < position.y){
        ofSetColor(color);
        ofDrawCircle(position.x, position.y, radius);
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
