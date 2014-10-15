#pragma once

#include "ofMain.h"

class dotje {
public:
    int     x;
    int     y;

    float   bodySize;
    float   speed;

    float   direction; // Radialen

    ofColor color;

    dotje() {
        x = ofRandomWidth();
        y = ofRandomHeight();
        bodySize = 5;
        speed = 4;//(ofRandom(1000)-500)/100;
    }

    void draw() {
        ofCircle(x,y, bodySize);
    }
    void update(){
        float dx;
        float dy;
        dx = ofGetMouseX()-x;
        dy = ofGetMouseY()-y;

      /*  if(dx < 50 && dx > -50 && dy < 50 && dy > -50) {
            dx = ofNoise(x,y)*30;
            dy = ofNoise(x,y)*30;
        } */

        float alpha;

        alpha = atan2(dx,dy);

        direction = alpha; //(alpha-direction)*0.04;
        //cout << direction << endl;

        x += sin(direction)*speed;
        y += cos(direction)*speed;
    }

};


class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		vector<dotje>   dotjes;
};
