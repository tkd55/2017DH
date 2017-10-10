#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mPDF.load("sample.pdf");
    for (int i = 0; i < mPDF.getNumPath(); i++){
        ofPath& path = mPDF.getPathAt(i);
        const vector<ofPolyline > &tmpPoly = path.getOutline();
        for (int k = 0; k < tmpPoly.size(); k++){
            polys.push_back(tmpPoly[k]);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPolyline tmpPoly;
    float animation_time = fmodf(ofGetElapsedTimef(), 1) * 12;
    for (int k = 0; k < polys.size(); k++){
        tmpPoly = polys.at(k).getResampledByCount(100);
        int target_size = polys.size() * animation_time;
        tmpPoly.resize(target_size);
        tmpPoly.draw();
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
