#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"
//#include "TextureShape.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    // box2dのインスタンス変数
    ofxBox2d box2d;
    
    // ポインタ型のベクタ配列
    vector <ofPtr <ofxBox2dRect>> rects;
//    vector <ofPtr <ofxBox2dBaseShape>> shapes;
    
    ofImage misoda;
    
};
