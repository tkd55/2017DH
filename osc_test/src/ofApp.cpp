#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(60);
    ofBackground( 255, 255, 255 );

    // 円の角を滑らかにする
    ofSetCircleResolution(64);

    getFFT = 0;

    // ポート番号で接続
    receiver.setup(PORT);

}


//--------------------------------------------------------------
void ofApp::update(){

    // OSCの個数分繰り返す
    int index = 0;

    // 現在順番待ちのOSCメッセージがある間は受信を続ける
    while(receiver.hasWaitingMessages()){
        
        // OSCメッセージを受け取る変数
        ofxOscMessage m;
        receiver.getNextMessage(m);

        float val = m.getArgAsFloat(0);
        cout << "[0] : " << val << endl;
        
//        printf("%f\n", val);
        
//        if(index == 0){
//            getFFT = ofMap( ofToFloat( m.getArgAsString(index) ), -90, 0, 0, 1 );
//        }
//        index++;
    }
}


//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 255, 0, 255);

    // FFTの値を円の直径に
    ofDrawCircle(ofGetWidth() /2, ofGetHeight() /2, 300 * getFFT);
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
