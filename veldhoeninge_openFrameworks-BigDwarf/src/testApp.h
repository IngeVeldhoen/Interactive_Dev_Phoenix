#pragma once

#include "ofMain.h"

class dotje{
public:

int               X;
int               Y;
float             targetX;
float             targetY;
float             bodySize;
float             speed;
ofColor           color;
float             direction;
int               dik;

dotje() {
X = ofRandomWidth();
Y = ofRandomHeight();
bodySize = ofRandom(2,6);
speed = ofRandom(4,10);
color = ofColor::fromHsb(ofRandom(255),255,255);
dik = 1;
}


float ofxRotAngle(float startAngle, float endAngle, float maxTurn = 0, bool clamp = true, bool useRad
= true){
float cap = useRad ? TWO_PI : 360;
float dif = fmod((endAngle - startAngle), cap);
if(dif != fmod(dif, (cap/2))) {
dif = (dif<0) ? dif+cap : dif-cap;
}
if(clamp)
return ofClamp(dif,-maxTurn, maxTurn);
return dif;
}

void update(){
    float deltaX;
    float deltaY;
    float alpha;


    deltaX = ofGetMouseX()-X;
    deltaY = ofGetMouseY()-Y;
    alpha = atan2(deltaX,deltaY);

    direction += ofxRotAngle(direction, alpha, PI/24);

    float someVal = ofMap(ofDist(ofGetMouseX(), ofGetMouseY(), X, Y), 0, ofGetWidth(), 0.2, 8, true);
    X += sin(direction)*speed*someVal;
    Y += cos(direction)*speed*someVal;
    cout << speed*someVal;

}

void draw(){

    ofSetColor(color);
    ofSetLineWidth(dik);
    ofLine(ofGetWindowWidth()/2,ofGetWindowHeight()/2, X, Y);

 if (ofGetMousePressed()) {
       ofLine(X,Y, ofGetMouseX(), ofGetMouseY());
        dik++;
    }

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

		vector<dotje>        dotjes;

};
