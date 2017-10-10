#include "ofApp.h"

int counter = 0;
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    heatmap.setup(ofGetWidth(), ofGetHeight());
    
    mapImg.load("dot_l.jpg");
    
//    heatmap.setRadius(3);
    
    isClick = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(isClick == true ){
        heatmap.update(OFX_HEATMAP_CS_SPECTRAL_SOFT);
        if(counter == 2){
            heatmap.addPoint(ofRandom(280, 320), ofRandom(280, 320));
            
            heatmap.addPoint(ofRandom(580, 520), ofRandom(580, 520));
            
            heatmap.addPoint(ofRandom(180, 220), ofRandom(480, 420));
            
            heatmap.addPoint(ofRandom(680, 720), ofRandom(880, 920));
            
            heatmap.addPoint(ofRandom(780, 820), ofRandom(180, 220));
            counter = 0;
        }
        
        counter++;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    mapImg.draw(0, 0, ofGetWidth(), ofGetHeight());
    heatmap.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
//    heatmap.addPoint(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    isClick = true;
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
