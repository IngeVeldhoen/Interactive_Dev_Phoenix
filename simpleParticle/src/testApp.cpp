#include "testApp.h"
#include <iostream>

class Particle{
public:
    ofPoint velocity;
    ofPoint acceleration;
    ofPoint location;
    float lifespan;

    //bool isDead;

Particle(ofPoint loc){
location = loc;
acceleration = ofPoint(0.0, 0.0);
velocity = ofPoint(ofRandom(-1,1.0), ofRandom(-1,1.0));
lifespan = 255;
}

Particle(){}

void update(){
velocity += acceleration;
location += velocity;
lifespan -= 0.5;

}
void draw(){
    ofSetColor(0.0, 0.0, 0.0, lifespan);
    ofFill();
    ofEllipse(location.x, location.y, 8,8);

}
bool isDead(){
    if(lifespan < 0.5){
        return true;

    }
    else{
        return false;
    }
}
void hello(){
cout << "hello" << endl;
}


void run(){
update();
draw();
hello();
}
};

Particle p;
vector <Particle> parts;
int num;
//int *pnPtr = &num;

Particle myP;
Particle *pnPtr = &myP;


//--------------------------------------------------------------
void testApp::setup(){
ofSetColor(0);
ofBackground(255);
ofSetCircleResolution(20);
ofFill();
ofEnableAlphaBlending();




p = Particle(ofPoint(ofGetWidth()/2, ofGetHeight()/2));
num = ofRandom(100,500);

for(int i = 0; i < num; i++){
    Particle part = Particle(ofPoint(ofGetWidth()/2, ofGetHeight()/2));
    parts.push_back(part);
}
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i = 0; i < num; i++){
     parts[i].run();
    }
    (*pnPtr).run();
    //pnPtr->run();

}


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
