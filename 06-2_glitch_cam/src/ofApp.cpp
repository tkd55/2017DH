#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    cam.initGrabber(640, 480);
    

    isGlitch = false;
    
}

void ofApp::reset(){
    
    cam.update();
//    cam.draw(0, 0, ofGetWidth(), ofGetHeight());
//    glitchImg.grabScreen(0, 0, ofGetWidth(), ofGetHeight());

    
    colorImg.draw(0, 0, ofGetWidth(), ofGetHeight());

}


//--------------------------------------------------------------
void ofApp::update(){
    
    cam.update();
    colorImg.setFromPixels(cam.getPixels().getData(), 640, 480, OF_IMAGE_COLOR);
    colorImg.mirror(false, true);
    
    
    glitchImg.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
    glitchImg.save("compress.jpg", OF_IMAGE_QUALITY_WORST);
    ofBuffer file = ofBufferFromFile("compress.jpg");
    int fileSize = file.size();
    
    char* buffer = file.getData();
    int whichByte = (int) ofRandom(fileSize);
    int whichBit = ofRandom(8);
    
    char bitMask = 1 << whichBit;
    buffer[whichByte] |= bitMask;
    
    ofBufferToFile("compress.jpg", file);
    glitchImg.load("compress.jpg");
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(isGlitch) {
        glitchImg.draw(0, 0, ofGetWidth(), ofGetHeight());
        
        // ランダムなタイミングで自動的にリセット
        float coin = ofRandom(100);
        if(coin > 95){
            reset();
        }
    }
    else {
        colorImg.draw(0, 0, ofGetWidth(), ofGetHeight());
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
    isGlitch = !isGlitch;
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
