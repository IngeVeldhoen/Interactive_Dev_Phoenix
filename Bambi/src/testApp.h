#pragma once
#include "ofMain.h"
#include "Particle.h"

class testApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    void createParticle();
    void keyPressed(int key);

    ofImage img;

    vector <Particle> particles;
};
