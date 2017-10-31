//
//  images.hpp
//  03-5_class
//
//  Created by 武田 智道 on 2017/10/30.
//
//

#ifndef images_hpp
#define images_hpp

#include "ofMain.h"
#include <stdio.h>

class Images {
    
public:
    void setup(string src);
    void setPosition(ofVec2f click);
    void draw();
    
private:
    ofImage characterImg;
//    ofVec2f position;
    
    // 静的メンバ変数
    static ofVec2f position;
};

#endif /* images_hpp */
