#include "testApp.h"
class Pendulum{
public:
    ofPoint location;
    ofPoint origin;
    float r;
    float angle;
    float aVelocity;
    float aAcceleration;
    float damping;
    ofColor col;

    Pendulum(ofPoint origin_, float r_){
    origin = origin_;
    location = ofPoint(0,0);
    //r_=460;
    r = r_;
    angle = PI/4;

    aVelocity = 3,8;
    aAcceleration = 0,8;
    damping = 1,005;
    }

    Pendulum(){}

    void go(){
    update();
    display();
    }

    void update(){
    float gravity = 5.8;
    aAcceleration = (-1*gravity / r) * sin(angle);
    aVelocity += aAcceleration;
    angle += aVelocity;
    aVelocity*= damping;
    }

    void display(){

    location.set(r*sin(angle), r*cos(angle),1);

    location+=origin;
    cout << location << endl;
    col = ofColor::fromHsb(ofRandom(100,155),255,255, 60);
    ofSetColor(col);
   // ofSetColor(0);
    ofSetLineWidth(1);
    ofLine(origin.x, origin.y, location.x, location.y);
    ofFill();
    ofEllipse(location.x, location.y, 16,16);
    }
};
Pendulum myPen;

//--------------------------------------------------------------
void testApp::setup(){
ofSetCircleResolution(20);
ofSetBackgroundColor(255);
ofEnableAlphaBlending();
ofSetBackgroundAuto(false);
ofPoint loc = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
ofSetFrameRate(60);
myPen = Pendulum(loc, ofGetHeight()/2);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

myPen.go();
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
