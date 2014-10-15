#pragma once

#include "ofMain.h"

#define NUM_PARTICLES 1000

class Particle {
public:
    ofPoint speed;/// lets make a ofpoint and call it speed
    ofPoint offset;
    float     x;
    float     y;

    ofColor color; /// create a color named :   color;  / ofColor c;
    int     type;// type:  1 sec, 2 min, 3 hour

    int     val;/// later on we need a int called val, we should declare it here

    Particle() {

        x = ofGetWidth()/2;
        y = ofGetHeight()/2;
        offset.x = ofRandomWidth();
        offset.y = ofRandomHeight();
        speed.x = 10* cos(ofMap(ofGetSeconds(),0,60,0,TWO_PI));
        speed.y = 10* sin(ofMap(ofGetSeconds(),0,60,0,TWO_PI));

        if (type == 1) {
            color = ofColor::fromHsb(ofRandom(180,255),255,255);/// explain what happens here
        }else if (type == 2) {
            color = ofColor::fromHsb(ofRandom(100,180),255,255);
        }else if (type == 3) {
            color = ofColor::fromHsb(ofRandom(30,100),255,255);
        }
    }
    void goBack() {
       x = ofGetWidth()/2;
        y = ofGetHeight()/2; /// set x and y to the center of the screen

        if (type == 1) {
            speed.x = 2* cos(ofMap(val,0,60,0,TWO_PI));/// explain what happens here
            speed.y = 2* sin(ofMap(val,0,60,0,TWO_PI));/// explain what happens here
        }else if (type == 2) {
            speed.y = -2* cos(ofMap(val,0,60,0,TWO_PI));
            speed.x = 2* sin(ofMap(val,0,60,0,TWO_PI));
        }else if (type == 3) {
            speed.y = -2* cos(ofMap(val,0,12,0,TWO_PI));
            speed.x = 2* sin(ofMap(val,0,12,0,TWO_PI));
        }
    }
    void update(){
        if (type == 1) {
            val = ofGetSeconds();
        }else if (type == 2) {
            val = ofGetMinutes();
        }else if (type == 3) {
            val = ofGetHours();
        }

        speed.x += ofSignedNoise(x/100+offset.x,y/100+offset.y)/(100-val*20);/// explain what happens here
        speed.y += ofSignedNoise(x/100-offset.x,y/100-offset.y)/(100-val*20);


        x+=speed.x;/// add the x of speed to x
        y+=speed.y;/// add the y of speed to y

        if(x>ofGetWidth() || x < 0) {

            goBack();/// call the function: goBack
        }
        else if(y>ofGetHeight() || y < 0) {
           goBack(); /// call the function: goBack
        }
    }

    void draw() {
        ofColor c;
        c = color;
        /// we need to make an ofColor object and call it c
        c.setBrightness(ofMap(ofDist(ofGetWidth()/2, ofGetHeight()/2, x, y), 0, 250*type, 255, 0)); /// explain what happens here
        ofSetColor(c);/// set color to c

        ofCircle(x,y,type);
        /// draw a circle at x and y with a radius of type
    }
};

class testApp : public ofBaseApp{
	public:
void setup(); /// explain what happens here
		void update();
		void draw(); /// explain what happens here

		void keyPressed(int key);
		void mouseMoved(int x, int y);
		void mousePressed(int x, int y, int button);

        vector<Particle>        seconds;
        vector<Particle>        minutes;
        vector<Particle>        hours;

};

