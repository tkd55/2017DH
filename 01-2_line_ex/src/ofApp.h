#pragma once

#include "ofMain.h"

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
    
private:
    // その1
//    int posX[3];
//    int posY[3];
    
    // その2
//    int posX[3] = {100, 200, 300};
//    int posY[3] = {100, 200, 300};

    
    int redX;
    int redY;
    int speedRed;
    
    int blueX;
    int blueY;
    int speedBlue;
    
    int greenX;
    int greenY;
    
    int radius1;
    int radius2;
    int increase;
};
