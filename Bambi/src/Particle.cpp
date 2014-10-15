#include "Particle.h"

void Particle::setup() {
    vel.x = 3*ofRandomf();
    vel.y = 3*ofRandomf();
    angle = ofRandomf()*TWO_PI;
    age = 2;
    dik = 1;
}

void Particle::draw() {
    ofSetColor(color,ofMap(age,0,20,255,0,false));
    ofSetLineWidth(dik);
    ofLine(oldpos,pos);


}

void Particle::update() {
    angle += ofSignedNoise(pos.x, pos.y)*PI;
    vel.rotate(angle);
    oldpos = pos;
    pos += vel;
    age++;


if (ofGetMousePressed()) {
      dik++;

    }

}
