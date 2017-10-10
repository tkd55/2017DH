#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 色をつけよう！
    ofSetColor(255, 0, 0, 128);
    // ウィンドウの中央に円を描画
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 100);
    
    
    ofSetColor(0, 255, 0, 128);
    // 四角形を描画（■の左上の座標が(100, 100)で横幅100, 縦幅100の四角形）
    ofDrawRectangle(100, 100, 100, 100);

    ofSetColor(0, 0, 255, 128);
    // 直線
    ofDrawLine(300, 200, 400, 550);
    
    
    // 立方体
//    ofDrawBox(300, 300, 300, 100, 100, 100);
    
    // 円錐
//    ofDrawCone(300, 300, 100, 200);
    
    // 球
//    ofDrawSphere(<#float x#>, <#float y#>, <#float radius#>)

    // 楕円
//    ofDrawEllipse(<#float x#>, <#float y#>, <#float width#>, <#float height#>)

    // 三角形
//    ofDrawTriangle(<#float x1#>, <#float y1#>, <#float x2#>, <#float y2#>, <#float x3#>, <#float y3#>)
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
