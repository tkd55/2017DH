#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色を変える.
    ofBackground(0, 0, 0);
    
    // 円の角を増やす
    ofSetCircleResolution(64);
    
    // 右端にから左端に戻る円の中心
    redX = 100;
    redY = 100;
    speedRed = 5;
    
    // 跳ね返る円の中心
    blueX = 200;
    blueY = 200;
    speedBlue = 15;
    
    // 縮小する円の中心
    greenX = 300;
    greenY = 300;
    
    
    
    radius1 = 30;
    radius2 = 30;
    increase = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 右端に戻る
    redX = redX + speedRed;
    if(ofGetWidth() < redX-radius1){
        redX = 0;
    }

    // 跳ね返る
    blueX = blueX + speedBlue;
    if(ofGetWidth() < blueX+radius1 ){
        speedBlue = (-1) * speedBlue;
    }
    else if(blueX < 0+radius1){
        speedBlue = (-1) * speedBlue;
    }

    radius2 = radius2 + increase;
    if(80 < radius2){
        increase = (-1) * increase;
    }
    else if(radius2 < 10) {
        increase = (-1) * increase;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);
    ofDrawCircle(redX, redY, radius1);
    
    ofSetColor(0, 255, 0);
    ofDrawCircle(blueX, blueY, radius1);
    
    ofSetColor(0, 0, 255);
    ofDrawCircle(greenX, greenY, radius2);
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
