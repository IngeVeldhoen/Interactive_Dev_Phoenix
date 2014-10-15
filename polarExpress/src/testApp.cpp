#include "testApp.h"
#include "ofMath.h"
//Polar coordinates (, theta) are converted to cartesian (x,y)
// for use in the ellipse() fuction
float r = 0.0;
float theta = 0;
float b;
float l;
int index_ = 0;
float randoms[10];
ofColor col;

//--------------------------------------------------------------
void testApp::setup(){
    for(int i = 0; i < 10; i ++)
{
    randoms[i] = ofRandom(255);

}
ofSetFrameRate(120);
ofBackground(255);
//ofSetFrameRate(120);
ofSetVerticalSync(true);
ofSetBackgroundAuto(false);
r = ofGetHeight()/2;
b=100.0;
l=100.0;



}



//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    //every frame we access one element of the array


//and then go to the next
//index_ =(index_ +1)%10;//using the modulo operator to limit the array

col = ofColor::fromHsb(ofRandom(100,155),255,255, 60);
    ofSetColor(col);

    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    float degrees = ofRadToDeg(theta);
    float x_ = r * cos(theta);
    float y_ = r *sin(theta);
    //if(x)
   //ofSetColor(randoms[index_]);

    ofFill();
    ofEllipse(x_, y_, b,l);
    ofPopMatrix();
    float x = ofMap(sin(theta), -1,1,0, ofGetWidth());

    if(r < 38 || r <39)
    {
    r++;


col = ofColor::fromHsb(ofRandom(255),255,255);
    ofSetColor(col);
    }
    else{
    r -=1;
    theta += 2.8;

    col = ofColor::fromHsb(ofRandom(255),255,255);
    ofSetColor(col);

    }

    if(b > 10.0 && l > 10.0)
    {
    b-=0.3;
    l-=0.3;
    }else{

    }

    cout << r << endl;

    /*ofFill();
    ofSetLineWidth(1);
    ofLine(ofGetWidth()/2, 0, x, ofGetHeight()/2);
*/

    //polar to cartesian convertian.
/*float x = r * cos(theta);
float y = r * sin(theta);

ofSetColor(0);
ofFill();
ofEllipse(x + ofGetWidth()/2, y + ofGetHeight()/2, 1.6,1.6);
//adjust for center of windowEntry()
//increment th eangle
theta +=0.1;
cout << theta << endl; */

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
