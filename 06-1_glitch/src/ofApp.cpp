#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    reset();
    
    isGlitch = false;
}

void ofApp::reset() {
    //元のファイルを読込み
    img.load("sky.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(isGlitch){
        //Jpeg圧縮したデータの保存ファイル名
        string compressedFilename = "compressed.jpg";
        // Jpeg形式でファイルを保存
        img.save(compressedFilename, OF_IMAGE_QUALITY_WORST);
        
        
        ofBuffer file = ofBufferFromFile(compressedFilename);
        int fileSize = file.size();
        
        //Jepgファイルをバッファーに読込み
        char * buffer = file.getData();
        //データを破壊する場所をランダムに決定
        int whichByte = (int) ofRandom(fileSize);
        //ONにするbitをランダムに決定
        int whichBit = ofRandom(8);
        //ビットシフト(データを破壊?)
        char bitMask = 1 << whichBit;
        buffer[whichByte] |= bitMask;
        
        
        //glitchしたファイルを保存
        ofBufferToFile(compressedFilename, file);
        
        //再度読込み
        img.load(compressedFilename);
        
        
        // ランダムなタイミングで自動的にリセット
        float coin = ofRandom(100);
        if(coin > 85){
            reset();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //glitchしたイメージを描画
    ofSetColor(255,255,255);
    img.draw(0, 0, ofGetWidth(), ofGetHeight());
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
    isGlitch = !isGlitch;
    reset();
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
