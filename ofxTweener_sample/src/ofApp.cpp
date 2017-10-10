#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    position.x  = ofGetWidth()/2;
    position.y = ofGetHeight()/2;
    
    
    misoda.load("images/misoda.png");
    misoda.setAnchorPoint(misoda.getWidth()/2, misoda.getHeight()/2);
    misodaPosition.set(ofRandom(100, ofGetWidth() - 100), ofRandom(100, ofGetHeight() -100));
    
    kotori.load("images/kotori.png");
    kotori.setAnchorPoint(kotori.getWidth()/2, kotori.getHeight()/2);
    kotoriPosition.set(ofRandom(100, ofGetWidth() - 100), ofRandom(100, ofGetHeight() -100));

    zen.load("images/zen.png");
    zen.setAnchorPoint(zen.getWidth()/2, zen.getHeight()/2);

}

//--------------------------------------------------------------
void ofApp::update(){
    Tweener.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofSetColor(0, 255, 255);
//    ofDrawCircle(position.x, position.y, 30);
    
    misoda.draw(misodaPosition.x, misodaPosition.y);
    kotori.draw(kotoriPosition.x, kotoriPosition.y);

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
    
    Tweener.addTween(misodaPosition.x, x, 1);
    Tweener.addTween(misodaPosition.y, y, 1);

    Tweener.addTween(kotoriPosition.x, x, 2, &ofxTransitions::easeOutElastic, 1);
    Tweener.addTween(kotoriPosition.y, y, 2, &ofxTransitions::easeOutElastic, 1);

    
    // adding delay
//    Tweener.addTween(position.x, x, 1, &ofxTransitions::easeOutElastic, 1);
//    Tweener.addTween(position.y, y,  1, &ofxTransitions::easeOutElastic, 2);

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
