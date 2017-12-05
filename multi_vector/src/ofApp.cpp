#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    misoda.load("images/misoda.png");
    kotori.load("images/kotori.png");
    
    // misodaの位置
    vector<ofVec2f> misodaPosition;
    for(int cnt=0; cnt<10; cnt++){
        ofVec2f pos;
        pos.x = ofRandom(0, ofGetWidth());
        pos.y = ofRandom(0, ofGetHeight());
        misodaPosition.emplace_back(pos);
    }
    characters.emplace_back(misodaPosition);
    
    // kotoriの位置
    vector<ofVec2f> kotoriPosition;
    for(int cnt=0; cnt<5; cnt++){
        ofVec2f pos;
        pos.x = ofRandom(0, ofGetWidth());
        pos.y = ofRandom(0, ofGetHeight());
        kotoriPosition.emplace_back(pos);
    }
    characters.emplace_back(kotoriPosition);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int cnt=0; cnt<characters.size(); cnt++){
        for(int cnt2=0; cnt2<characters[cnt].size(); cnt2++){
            
            ofPushMatrix();
            ofTranslate(characters[cnt][cnt2].x, characters[cnt][cnt2].y);
            if(cnt == 0){
                misoda.draw(0, 0);
            }
            else if(cnt == 1){
                kotori.draw(0, 0);
            }
            ofPopMatrix();
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'm'){
        // 子どもだけ削除（空っぽの箱が残る）
        // misodaの動的配列はcharactersの0番目の要素
        characters[0].clear();
    }
    else if(key == 'k'){
        // 子どもだけ削除（空っぽの箱が残る）
        // kotoriの動的配列はcharactersの1番目の要素
        characters[1].clear();
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
