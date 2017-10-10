#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(34, 34, 34);      //背景色を黒に設定
    
    ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int cnt=0; cnt<positions.size(); cnt++){
        radiuses[cnt] += 5;
        colors[cnt] -= 10;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofNoFill();
    ofSetLineWidth(2);
    for(int cnt=0; cnt<positions.size(); cnt++){
        ofSetColor(200, 200, 200, colors[cnt]);
        ofDrawCircle(positions[cnt].x, positions[cnt].y, radiuses[cnt]);
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
    ofVec2f diff;
    
    diff.x = std::abs(tmp.x - x);
    diff.y = std::abs(tmp.y - y);
    
    if(20 < diff.x || 20 < diff.y){
        ofVec2f position;
        position.x = x;
        position.y = y;
        positions.push_back(position);
        
        radiuses.push_back(30);
        
        colors.push_back(255);
    }
    
    
    tmp.x = x;
    tmp.y = y;

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
