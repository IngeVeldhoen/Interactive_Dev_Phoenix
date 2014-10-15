#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    img.loadImage("appel.jpg");
    ofSetBackgroundAuto(false);
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
    ofBackground(0);

}

//--------------------------------------------------------------
void testApp::update(){
    ofSetWindowTitle(ofToString(ofGetFrameRate(),0));
    for (int i=0; i<particles.size(); i++) {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255);
//Particle p;

    for (int i=0; i<particles.size(); i++) {
        Particle &p = particles[i];
       // p.color = img.getColor(p.pos.x,p.pos.y);
       p.draw();
    }

    for (int i=0; i<50; i++) {
        createParticle();
    }

    while (particles.size()>500) {
        particles.erase(particles.begin());
    }

}
void testApp::createParticle() {
    Particle p;
    p.setup();
    p.pos.set(ofRandomWidth(), ofRandomHeight());
    p.color = img.getColor(p.pos.x,p.pos.y);
    particles.push_back(p);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key=='s') ofSaveFrame();
    if (key=='q') ofEnableSmoothing();
    if (key=='Q') ofDisableSmoothing();
}
