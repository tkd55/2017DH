#include "ofApp.h"

#define MOSAIC_SIZE 20		// 個々のモザイクのサイズ
#define	CLEAR_SIZE	100		// モザイクにならない箇所の範囲


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    
    // カメラの初期設定（カメラで読み込む画像の大きさ）
    cam.initGrabber(640, 480);
    
    mozaic_size = 30;
}

//--------------------------------------------------------------
void ofApp::update(){
    // カメラの更新
    cam.update();
    
    // 取り込んだフレームを画像としてキャプチャ
    colorImg.setFromPixels(cam.getPixels().getData(), 640, 480, OF_IMAGE_COLOR);

    // 左右反転
    colorImg.mirror(false, true);
}

//--------------------------------------------------------------
void ofApp::draw(){
    colorImg.draw(0, 0);
    
    unsigned char* pixels = cam.getPixels().getData();
    for (int i = 0; i < 640; i += MOSAIC_SIZE){
        for (int j = 0; j < 480; j += MOSAIC_SIZE){
            // クリックしたところを中心にモザイクを外す
            if( ((j < (mouseY - CLEAR_SIZE)) || ((mouseY + CLEAR_SIZE < j)) ||
                 ((i < (mouseX - (CLEAR_SIZE))) || (mouseX + (CLEAR_SIZE) < i))) ){
                int r = pixels[j * 640 * 3 + i * 3];
                int g = pixels[j * 640 * 3 + i * 3 + 1];
                int b = pixels[j * 640 * 3 + i * 3 + 2];
                ofSetColor(r, g, b);
                ofFill();
                ofDrawRectangle(i, j, MOSAIC_SIZE, MOSAIC_SIZE);
                ofNoFill();
                ofSetColor(255, 255, 255);
            }
        }
    }
    
    
//    unsigned char* pixels = colorImg.getPixels().getData();
//    for (int i = 0; i < 640; i += mozaic_size){
//        for (int j = 0; j < 480; j += mozaic_size){
//            int r = pixels[j * 640 * 3 + i * 3];
//            int g = pixels[j * 640 * 3 + i * 3 + 1];
//            int b = pixels[j * 640 * 3 + i * 3 + 2];
//            ofSetColor(r, g, b);
//            ofFill();
//            ofDrawRectangle(i, j, mozaic_size, mozaic_size);
//            ofNoFill();
//            ofSetColor(255, 255, 255);
//        }
//    }
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
    if(2 < mozaic_size){
        mozaic_size -= 2;
    }
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
