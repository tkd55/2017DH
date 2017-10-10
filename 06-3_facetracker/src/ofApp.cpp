#include "ofApp.h"

using namespace ofxCv;

//--------------------------------------------------------------
void ofApp::setup(){
    
    cam.initGrabber(640, 480);
    
//    myFont.loadFont("GDhwGoJA-TTF108b.ttf", 34);
    
    
    tracker.setup();
    
    color.set(255, 255, 255);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    cam.update();
    
    if(cam.isFrameNew()) {
        colorImg.setFromPixels(cam.getPixels().getData(), 640, 480, OF_IMAGE_COLOR);
        colorImg.mirror(false, true);
        
        tracker.update(toCv(colorImg));
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    colorImg.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    
    ofSetLineWidth(2);
    vector <ofVec2f> points = tracker.getImagePoints();
    double offsetX = 1.6;//ofGetWidth()/640;
    double offsetY = 1.6;//ofGetHeight()/480;
    
//    printf("size : %d\n", points.size());
    if(points[0].x == 0 && points[0].y == 0){
        color.set(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    }
    
    ofSetColor(color);
    for(int cnt=0; cnt<points.size(); cnt++){
        ofDrawCircle(points[cnt].x * offsetX, points[cnt].y * offsetY, 5);
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
