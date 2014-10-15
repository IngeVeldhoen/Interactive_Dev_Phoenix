#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
public:
void setup(){

ofSetFrameRate(60);
ofEnableAlphaBlending();
ofSetBackgroundAuto(false);
ofBackground(0);


X = ofRandomWidth();
Y = ofRandomHeight();
bodySize = ofRandom(2,6);
speed = ofRandom(4,10);
color = ofColor::fromHsb(ofRandom(255),255,255,100);
colors = ofColor::fromHsb(ofRandom(255),255,255,100);
dik = 1;
ding = 2;
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

    ofSetLineWidth(dik);
    ofLine(ofGetWindowWidth()/2,ofGetWindowHeight()/2, X, Y);

 if (ofGetMousePressed(-1)) {
        //ofSetColor(color);
        ofSetColor(color,ofMap(ding, 0,20,255,0,false));
       ofLine(X,Y, ofGetMouseX(), ofGetMouseY());
        dik++;

    }
if(ofGetKeyPressed()){
       // ofSetColor(colors);
                ofSetColor(colors,ofMap(ding, 0,20,255,0,false));

       ofLine(X,Y, ofGetMouseX(), ofGetMouseY());
        dik--;
}

}

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		int               X;
        int               Y;
        float             targetX;
        float             targetY;
        float             bodySize;
        float             speed;
        ofColor           color;
        ofColor           colors;
        float             direction;
        int               dik;
        int               ding;

};
