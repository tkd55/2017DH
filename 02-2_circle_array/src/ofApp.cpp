#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int cnt=0; cnt<CIRCLE_NUM; cnt++){
        // 円の初期位置設定
        positions[cnt].x = ofRandom(0, ofGetWidth());
        positions[cnt].y = ofRandom(0, ofGetHeight());
        
        // それぞれの円のスピード設定
        speed[cnt].x = ofRandom(-5, 5);
        speed[cnt].y = ofRandom(-5, 5);

        // それぞれの円の色を設定
        color[cnt].r = ofRandom(0, 255);
        color[cnt].g = ofRandom(0, 255);
        color[cnt].b = ofRandom(0, 255);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int cnt=0; cnt<CIRCLE_NUM; cnt++){
        
        // それぞれの円の位置の更新
        positions[cnt].x = positions[cnt].x + speed[cnt].x;
        positions[cnt].y = positions[cnt].y + speed[cnt].y;
    
        // 左右端の跳ね返り
        if(positions[cnt].x < 0 || ofGetWidth() < positions[cnt].x){
            speed[cnt].x = (-1) * speed[cnt].x;
        }
    
        // 上下端の跳ね返り
        if(positions[cnt].y < 0 || ofGetHeight() < positions[cnt].y){
            speed[cnt].y = (-1) * speed[cnt].y;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int cnt=0; cnt<CIRCLE_NUM; cnt++){
        // それぞれの円の表示
        ofSetColor(color[cnt]);
        ofDrawCircle(positions[cnt].x, positions[cnt].y, 100);
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
