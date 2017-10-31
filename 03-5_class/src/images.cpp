//
//  images.cpp
//  03-5_class
//
//  Created by 武田 智道 on 2017/10/30.
//
//

#include "images.hpp"
#include "ofApp.h"

ofVec2f Images::position;

void Images::setup(string src) {
    characterImg.load(src);
}

void Images::setPosition(ofVec2f aPosition){
    position.x = aPosition.x;
    position.y = aPosition.y;
}

void Images::draw() {
    characterImg.draw(position.x, position.y);
}