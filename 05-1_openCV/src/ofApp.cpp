#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
     // カメラの初期設定（カメラで読み込む画像の大きさ）
    cam.initGrabber(320, 240);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    // 取り込むフレームの更新
    cam.update();
    
    // 取り込んだフレームを画像としてキャプチャ
    colorImg.setFromPixels(cam.getPixels().getData(), 320, 240, OF_IMAGE_COLOR);
    
    // キャプチャの左右反転
    colorImg.mirror(false, true);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // キャプチャした画像の表示
    colorImg.draw(0, 0, ofGetWidth(), ofGetHeight());

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
