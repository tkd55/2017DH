#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    misoda.setImageSrc("images/misoda.png");
    misoda.setup(100);

//    kotori.setImageSrc("images/kotori.png");
    kotori.setup(300);

    
    click.x = -1;
    click.y = -1;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if(click.x != -1 && click.y != -1){
        if(isPress){
            kotori.draw(click);
        }
        else {
            misoda.draw(click);
        }
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
    isPress = true;
    click.x = x;
    click.y = y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    isPress = false;
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
