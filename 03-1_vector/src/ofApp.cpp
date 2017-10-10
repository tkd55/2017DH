#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(0, 0, 0);
    
    // 円の角の数
    ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){
    // 動かしてみよう！
    for(int cnt=0; cnt<positions.size(); cnt++){
//        positions[cnt].x = positions[cnt].x + ofRandom(-5, 5);
//        positions[cnt].y = positions[cnt].y + ofRandom(-5, 5);
        
        positions[cnt].x = positions[cnt].x + speeds[cnt].x;
        positions[cnt].y = positions[cnt].y + speeds[cnt].y;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int cnt=0; cnt<positions.size(); cnt++){
        ofSetColor(colors[cnt]);
        ofDrawCircle(positions[cnt].x, positions[cnt].y, 5);
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
    ofVec2f position;
    position.x = x;
    position.y = y;
    positions.push_back(position);
    
    ofVec2f speed;
    speed.x = ofRandom(-5, 5);
    speed.y = ofRandom(-5, 5);
    speeds.push_back(speed);
    
    
    ofColor color;
    color.r = ofRandom(0, 255);
    color.g = ofRandom(0, 255);
    color.b = ofRandom(0, 255);
    colors.push_back(color);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
//    ofVec2f position;
//    position.x = x;
//    position.y = y;
//    positions.push_back(position);
//    
//    ofVec2f speed;
//    speed.x = ofRandom(-5, 5);
//    speed.y = ofRandom(-5, 5);
//    speeds.push_back(speed);

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
