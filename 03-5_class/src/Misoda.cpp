//
//  Misoda.cpp
//  03-5_class
//
//  Created by 武田智道 on 2017/10/18.
//


#include "ofApp.h"
int Misoda::score;

void Misoda::setup(int value) {
//    misodaImg.load(image_src2);
    score = value;
}

void Misoda::setImageSrc(string src){
    image_src2 = src;
}

void Misoda::draw(ofVec2f position) {
//    ofTranslate(position.x - misodaImg.getWidth()/2, position.y - misodaImg.getHeight()/2);
//    misodaImg.draw(0, 0);
    printf("%d\n", score);
}
