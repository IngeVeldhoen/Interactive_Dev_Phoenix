#include "testApp.h"

class Oscilator{
public:
    ofPoint angle;
    ofPoint velocity;
    ofPoint amplitude;
    ofColor col;

    Oscilator(){
    angle = ofPoint(0.0, 0.0);
    velocity = ofPoint(ofRandom(-0.05, 0.05), ofRandom(-0.05, 0.05));
    amplitude = ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));

    }
    void oscillate(){
    angle += velocity;

    }

    void draw(){
    float x = sin(angle.x)*amplitude.x;
    float y = sin(angle.y)*amplitude.y;
    float mouseX = ofGetMouseX();
    float mouseY = ofGetMouseY();
    col = ofColor::fromHsb(ofRandom(255),255,255);
    ofSetColor(col);

    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetLineWidth(0.5);
    //ofSetColor(0);
    ofFill();
    ofLine(0,0,x,y);
    ofSetLineWidth(1.0);
    ofTriangle(x,y,50,50, 0, 0);
    ofEllipse(x,y,16,16);

   // ofTriangle(x y x y x )
    ofPopMatrix();
    ofRect(mouseX,mouseY,-1,x,y);
    }
};

vector <Oscilator> myCircles;
int s;
//--------------------------------------------------------------
void testApp::setup(){
ofSetCircleResolution(20);
ofEnableAlphaBlending();
ofSetFrameRate(30);
ofBackground(0);
ofSetBackgroundAuto(false);

s = ofRandom(100,300);

for(int i=0; i <s; i++)
{
    Oscilator myOsc = Oscilator();
    myCircles.push_back(myOsc);
    cout << myCircles.size() << endl;
}
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

for(int i = 0; i <s; i++)
{
    myCircles[i].oscillate();
    myCircles[i].draw();


}
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
