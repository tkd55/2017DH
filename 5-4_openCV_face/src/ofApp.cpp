#include "ofApp.h"

#define MOVIE_INPUT_WSIZE   320
#define MOVIE_INPUT_HSIZE   240
//--------------------------------------------------------------
void ofApp::setup(){
    
    // ビデオを取り込み初期化
    vidGrabber.initGrabber(MOVIE_INPUT_WSIZE, MOVIE_INPUT_HSIZE);
    // カラー画像とグレー画像の画像領域を確保
    colorImg.allocate(MOVIE_INPUT_WSIZE, MOVIE_INPUT_HSIZE);
    grayImg.allocate(MOVIE_INPUT_WSIZE, MOVIE_INPUT_HSIZE);
    
    // 検分器の読み込み
    haarFinder.setup("haarcascade_frontalface_default.xml");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    vidGrabber.update();
    
    // 取得した画像を解析するカラー画像の領域に格納
    colorImg.setFromPixels(vidGrabber.getPixels().getData(), MOVIE_INPUT_WSIZE, MOVIE_INPUT_HSIZE);
    // カラー画像をグレースケールに変換
    grayImg = colorImg;
    // グレースケールオブジェクトを設定
    haarFinder.findHaarObjects(grayImg, 10, 10);
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 検出した顔の数を取得
    int numFace = haarFinder.blobs.size();
    
    float x[numFace], y[numFace], w[numFace], h[numFace];
    
    ofSetColor(0xffffff);
    
    // 通常の画像と顔を検出した画像の出力
    colorImg.draw(0, 0, MOVIE_INPUT_WSIZE, MOVIE_INPUT_HSIZE);
    colorImg.draw(MOVIE_INPUT_WSIZE, 0, MOVIE_INPUT_WSIZE, MOVIE_INPUT_HSIZE);
    
    //******************************
    // Face
    //******************************
    for(int i = 0; i < numFace; i++){
        x[i] = haarFinder.blobs[i].boundingRect.x;
        y[i] = haarFinder.blobs[i].boundingRect.y;
        w[i] = haarFinder.blobs[i].boundingRect.width;
        h[i] = haarFinder.blobs[i].boundingRect.height;
        // 検出した顔を白の四角で覆う
        ofSetColor(0xFFFFFF);
        
        ofDrawRectangle(x[i]+MOVIE_INPUT_WSIZE, y[i], w[i], h[i]);
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
