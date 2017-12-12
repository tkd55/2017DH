#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // シリアル通信の設定
    // 第1引数 : シリアル通信のポート名
    // 第2引数 : ボーレート
    serial.setup("/dev/cu.usbmodem1421", 9600);

}

//--------------------------------------------------------------
void ofApp::update(){
    // Arduinoからのデータを受け取る
    if(serial.available() >= 4){
        for(int cnt=0; cnt<4; cnt++){
            receiveData[cnt] = serial.readByte();
        }
        
        
        if(receiveData[0] == '\x80' & receiveData[3] == '\x81'){
            // 本来のデータを元に戻す
            sensorData = (receiveData[1] << 7) + receiveData[2];
//            cout << sensorData << endl;
        }
        serial.flush();
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // データの値を背景色に設定
    ofSetColor(sensorData, sensorData, sensorData);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());

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
