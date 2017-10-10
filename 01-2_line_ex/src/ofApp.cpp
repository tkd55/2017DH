#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色を変える.
    ofBackground(0, 0, 0);
    
    // 円の角を増やす
    ofSetCircleResolution(64);
    
    speed = 15;
    radius = 30;
    
    increase = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    posX[0] = posX[0] + 5;
    
    // 右端に戻る
    if(ofGetWidth() < posX[0]){
        posX[0] = 0;
    }

    posX[1] = posX[1] + speed;
    // 跳ね返る
    if(ofGetWidth() < posX[1] ){
        speed = (-1) * speed;
    }
    else if(posX[1] < 0){
        speed = (-1) * speed;
    }

    radius = radius + increase;
    if(80 < radius){
        increase = (-1) * increase;
    }
    else if(radius < 10) {
        increase = (-1) * increase;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);
    ofDrawCircle(posX[0], posY[0], 30);
    
    ofSetColor(0, 255, 0);
    ofDrawCircle(posX[1], posY[1], 30);
    
    ofSetColor(0, 0, 255);
    ofDrawCircle(posX[2], posY[2], radius);
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
