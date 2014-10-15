#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);

    for (int i=0; i<NUM_PARTICLES*3; i++) {
        Particle p;
        p.type = 1; // seconds
        seconds.push_back(p);
    }
    for (int i=0; i<NUM_PARTICLES; i++) {
        Particle p;
        p.type= 2;/// the number type for minutes is 2. We need to set it
        minutes.push_back(p);
    }
    for (int i=0; i<NUM_PARTICLES; i++) {
        Particle p;/// we need to make something called p (of type particle)
        p.type = 3; // hours
        hours.push_back(p);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<NUM_PARTICLES*3; i++) {
        seconds[i].update(); /// explain what happens here
    }
    for (int i=0; i<NUM_PARTICLES; i++) {
        minutes[i].update();
    }
    for (int i=0; i<NUM_PARTICLES; i++) {
        hours[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    /// set background to black


    for (int i=0; i<NUM_PARTICLES*3; i++) {

        seconds[i].draw();    /// we need to draw someting here?
    }
    float y2 = 100* sin(ofMap(ofGetSeconds(),0,30,0,TWO_PI));
    float x2 = 100* cos(ofMap(ofGetSeconds(),0,30,0,TWO_PI));
  //  ofLine(ofGetWidth()/2,ofGetHeight()/2, ofGetWidth()/2+x2, ofGetHeight()/2+y2);

    for (int i=0; i<NUM_PARTICLES; i++) {
        minutes[i].draw();/// we need to draw someting here?
    }
    x2 = 100* sin(ofMap(ofGetMinutes(),0,60,0,TWO_PI));
    y2 = 100* cos(ofMap(ofGetMinutes(),0,60,0,TWO_PI));
    //ofLine(ofGetWidth()/2,ofGetHeight()/2, ofGetWidth()/2+x2*2, ofGetHeight()/2-y2*2);

    for (int i=0; i<NUM_PARTICLES; i++) {
               hours[i].draw(); /// we need to draw someting here?
    }
    x2 = 100* sin(ofMap(ofGetHours(),0,12,0,TWO_PI));
    y2 = 100* cos(ofMap(ofGetHours(),0,12,0,TWO_PI));
   // ofLine(ofGetWidth()/2,ofGetHeight()/2, ofGetWidth()/2+x2, ofGetHeight()/2-y2);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    /// can we use key pressed for something?
}


//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    /// and what would be the use of mousePressed?
}



