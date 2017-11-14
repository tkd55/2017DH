#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // window
    ofSetWindowShape(1280, 960);
    
    // camera
    camera.initGrabber(1280, 960);
    
    // allocate images
    grayImage.allocate(1280, 960);
    edgeImage.allocate(1280, 960);
    
    //--------------------------------------
    // GUI
    //--------------------------------------
    gui.setup();
    gui.add(cvCannyArg1.setup("hue Max", 20, 0, 255));
    gui.add(cvCannyArg2.setup("hue Min", 100, 0, 255));
    gui.add(threshold.setup("hue Min", 63, 0, 255));
}

//--------------------------------------------------------------
void ofApp::update(){
    // camera
    camera.update();
    
    colorImage.setFromPixels(camera.getPixels().getData(), 1280, 960);
    colorImage.mirror(false, true);
    
    grayImage = colorImage;
    grayImage.blur();
    
    // エッジ検出
    cvCanny(grayImage.getCvImage(), edgeImage.getCvImage(), cvCannyArg1, cvCannyArg2);
    
    // ofxOpenCvアドオンにたいして画像が変更したことを通知する
    // updateのようなもの
    // ofxOpenCv の画像オブジェクトを OpenCV 関数によって変更したり，あるいはピクセルデータを直接書き換えた場合）
    edgeImage.flagImageChanged();
    
    // 画像の欠損部を補完
    edgeImage.dilate();
    
    // posterization（画像の粗階調化）
//    unsigned char *colorData = colorImage.getPixels().getData();
//    unsigned char *grayData = grayImage.getPixels().getData();
//    unsigned char *edgeData = edgeImage.getPixels().getData();
//    for (int i = 0; i < 1280*960; i++) {
//        if (edgeData[i] == 0)
//            grayData[i] = (grayData[i] / (threshold+1)) * (threshold+1) + threshold;
//        else
//            grayData[i] = 0;
//    }
//    
//    // updateのようなもの
//    // ofxOpenCv の画像オブジェクトを OpenCV 関数によって変更したり，あるいはピクセルデータを直接書き換えた場合）
//    grayImage.flagImageChanged();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //  draw camera image
    //    camera.draw(0, 0, 640, 480);
//        edgeImage.draw(640, 0, 640, 480);
    //    grayImage.draw(1280, 0, 640, 480);
    
    grayImage.draw(0, 0, 1280, 960);
    
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}