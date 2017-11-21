#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
    int windowWidth = ofGetWidth();
    int windowHeight = ofGetHeight();
    
    // カメラからの取り込み
    cam.initGrabber(1024, 768);
    
    // OpenCVで解析する320 x 240 の領域を確保
    colorImg.allocate(1024, 768);
    
    grayImg.allocate(1024, 768);

    
    grayBg.allocate(1024, 768);
    grayDiff.allocate(1024, 768);

    threshold = 100;
    
    isSave = true;
    
    ofEnableSmoothing();
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    
    colorImg.setFromPixels(cam.getPixels().getData(), 1024, 768);
    
    colorImg.mirror(false, true);
    
    colorImg.blur();
    
    grayImg = colorImg;
    
    if(isSave == true){
        grayBg = grayImg;
        isSave = false;
    }
    grayDiff.absDiff(grayBg, grayImg);
    
    // 二値化
    grayDiff.threshold(threshold);
    
    // findContours(分析する画像:ofxCvGrayscaleImage, 最小エリア, 最大エリア, 認識する物体の数, 穴を検出するか);    
    contourFinder.findContours(grayDiff, 20, (ofGetWidth()*ofGetHeight())/4, 10, true);
    
    edgeLines.clear();
    
    for(int j = 0; j < contourFinder.nBlobs; j++){
        
        ofPolyline line;
        for (int k = 0; k < contourFinder.blobs[j].pts.size(); k++){
            line.addVertex(contourFinder.blobs[j].pts[k]);
        }
        line.close();
        line.simplify();

        edgeLines.push_back(line);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    colorImg.draw(0, 0);
//    
//    grayImg.draw(330, 0);
//    
//    grayBg.draw(0, 250);
//    
//    grayDiff.draw(330, 250);
//    
//    // 輪郭線表示
//    contourFinder.draw(340, 500);
    
    ofSetColor(255, 255, 255);
    colorImg.draw(0, 0, ofGetWidth(), ofGetHeight());
 
    ofSetLineWidth(10);
    ofSetColor(255, 0, 0);
    for(int cnt=0; cnt<edgeLines.size(); cnt++){
        edgeLines[cnt].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        isSave = true;
    }
        
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
