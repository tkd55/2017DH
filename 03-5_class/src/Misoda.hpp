//
//  Misoda.hpp
//  03-5_class
//
//  Created by 武田智道 on 2017/10/18.
//

#ifndef Misoda_hpp
#define Misoda_hpp

#include <stdio.h>

class Misoda {
    
public:
    void setup(int value);
    void draw(ofVec2f position);
    void setImageSrc(string src);
    
private:
    ofImage misodaImg;
    
//    string image_src;
    static string image_src2;
    static int score;
};

#endif /* Misoda_hpp */
