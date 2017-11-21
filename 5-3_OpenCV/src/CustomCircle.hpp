//
//  CustomCircle.hpp
//  5-3_OpenCV
//
//  Created by 武田 智道 on 2017/11/19.
//
//

#ifndef CustomCircle_hpp
#define CustomCircle_hpp

#include <stdio.h>
#include "ofxBox2d.h"

class CustomCircle : public ofxBox2dCircle {

public:
    void draw(); //円を描画する

};

#endif /* CustomCircle_hpp */
