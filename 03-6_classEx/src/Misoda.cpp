//
//  Misoda.cpp
//  03-5_class
//
//  Created by 武田智道 on 2017/10/18.
//


#include "ofApp.h"
void Misoda::setup() {
    misodaImg.load("images/misoda.png");
}

void Misoda::draw(ofVec2f position) {
    ofPushMatrix();
        ofTranslate(position.x - misodaImg.getWidth()/2, position.y - misodaImg.getHeight()/2);
        misodaImg.draw(0, 0);
    ofPopMatrix();
}
