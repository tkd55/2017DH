#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(false);
    
    ofImage distortionMap;
    distortionMap.load("distortion.png");
    
    //set up a slit scan with a maximum capacity of frames
    // in the distortion buffer
    slitScan.setup(640, 480, 120);
    
    slitScan.setDelayMap(distortionMap);
    //blending means the edges between the scans are feathered
    slitScan.setBlending(true);
    
    //time delay is the deepest in history the delay can go
    //and width is the number of frames the distortion will encompass
    //note that the delay cannot be more than the total capacity
    slitScan.setTimeDelayAndWidth(0, 120);
    
    //set up the grabber
    cam.initGrabber(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    if(cam.isFrameNew()){
        
        colorImg.setFromPixels(cam.getPixels().getData(), 640, 480, OF_IMAGE_COLOR);
        colorImg.mirror(false, true);
        slitScan.addImage(colorImg);
        slitScan.setTimeDelayAndWidth(1, 50);
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    slitScan.getOutputImage().draw(0, 0, ofGetWidth(), ofGetHeight());
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
