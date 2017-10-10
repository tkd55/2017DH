#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    inkSim.setup();
    ofBackground(125, 125, 125);
    
    for(int cnt=0; cnt<ofGetWidth(); cnt+=5){
        inkSim.stroke(&brush, ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)));
    }
//    for(int cnt=0; cnt<ofGetWidth(); cnt+=5){
//        inkSim.stroke(&brush, ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofColor(255, 0, 0));
//    }
}

//--------------------------------------------------------------
void ofApp::update(){
    inkSim.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    inkSim.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == '1')
    {
        inkSim.setDrawMode(ofxInkSim::INKFIX);
    }
    else if (key == '2')
    {
        inkSim.setDrawMode(ofxInkSim::INKSURF);
    }
    else if (key == '3')
    {
        inkSim.setDrawMode(ofxInkSim::INKFLOW);
    }
    else if (key == '4')
    {
        inkSim.setDrawMode(ofxInkSim::WATERFLOW);
    }
    else if (key == 'd')
    {
        inkSim.toggleDebug();
    }
    else if (key == 'c')
    {
        inkSim.clear();
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
//    ofColor c = moodmachine;
//    inkSim.stroke(&brush, x, y, getInkColor(c.getHueAngle(), 255, 10));
    
    inkSim.stroke(&brush, x, y, ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)));

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
