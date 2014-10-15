#include "testApp.h"

class Ballen{
public:
    ofColor col;
    ofColor col1;
    float xpos;
    float ypos;


Ballen(){
}

Ballen(float xpos_, float ypos_)
{
    col = ofColor::fromHsb(ofRandom(20, 40),255,255,255);
    col1 = ofColor::fromHsb(ofRandom(130, 160),255,150,80);
    xpos = xpos_;
    ypos = ypos_;

}
    void draw(){
   // ofColor col = ofFloatColor::fromHsb(1.0, 1.0,0.7);



     if (ofGetMousePressed(-1)) {
     ofSetColor(col1);
    }
    else {
        ofSetColor(col);
    }
    ofEllipse(xpos, ypos, 50,50);
    }
};


float xpos = 100.0;
float ypos = 100.0;
Ballen myBalls;
Ballen myBalls2;
Ballen myBalls3;
Ballen myBalls4;
Ballen myBalls5;
Ballen myBalls6;
Ballen myBalls7;
Ballen myBalls8;
Ballen myBalls9;
Ballen myBalls10;
//--------------------------------------------------------------
void testApp::setup(){
myBalls = Ballen(xpos, ypos);
myBalls2 = Ballen(xpos+50, ypos);
myBalls3 = Ballen(xpos+100, ypos);
myBalls4 = Ballen(xpos+150, ypos);
myBalls5 = Ballen(xpos+200, ypos);
myBalls6 = Ballen(xpos, ypos+50);
myBalls7 = Ballen(xpos+50, ypos+50);
myBalls8 = Ballen(xpos+100, ypos+50);
myBalls9 = Ballen(xpos+150, ypos+50);
myBalls10 = Ballen(xpos+200, ypos+50);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
myBalls.draw();
myBalls2.draw();
myBalls3.draw();
myBalls4.draw();
myBalls5.draw();
myBalls6.draw();
myBalls7.draw();
myBalls8.draw();
myBalls9.draw();
myBalls10.draw();


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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
