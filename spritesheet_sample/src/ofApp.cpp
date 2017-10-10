#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    spriteRenderer = new ofxSpriteSheetRenderer(1, 10000, 0, 32); //declare a new renderer with 1 layer, 10000 tiles per layer, default layer of 0, tile size of 32
    spriteRenderer->loadTexture(".png", 256, GL_NEAREST); // load the spriteSheetExample.png texture of size 256x256 into the sprite sheet. set it's scale mode to nearest since it's pixel art

}

//--------------------------------------------------------------
void ofApp::update(){

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
