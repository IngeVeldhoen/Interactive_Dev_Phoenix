#include "testApp.h"



class Spaceship{
public:
    ofColor col;
    float xpos;
    float ypos;
    float speed;

Spaceship(){
}

Spaceship(float xpos_, float ypos_, float speed_)
{

    xpos = xpos_;
    ypos = ypos_;
    speed = speed_;


}
    void draw(){
    xpos = xpos + speed;
    ofColor col = ofFloatColor::fromHsb(1.0, 1.0,0.7);
    ofColor coll = ofColor::brown;
    ofSetColor(coll);
    ofEllipse(xpos, ypos, 50,50);
    }
};


float xpos = 100.0;
float ypos = 100.0;
float speed = 0.5;
Spaceship myShip;



//--------------------------------------------------------------
void testApp::setup(){
//Mis en place
//ofSetBackgroundAuto(false);
// by creating an instance of the Car class, i run the constructor of the class and pass in the values required by the constructor's signiture
myShip = Spaceship(xpos, ypos, speed);
ofBackground(50,200,200);
myVects.push_back(1);

//myVects.push_back();

/*string myString;
cin >> myString;
cout << myString << endl;*/

}

//--------------------------------------------------------------
void testApp::update(){
//math stuff in update
xpos = xpos + speed;

//ypos ++;
}

//--------------------------------------------------------------
void testApp::draw(){
//make graphics on screen, screen stuff


//ofEllipse(xpos,mouseY,100,100);
myShip.draw();

 if (ofGetMousePressed(-1)) {
        //ofSetColor(color);
       myShip.xpos += 20;

cout << "i'm flying";
    }

    int myCollection[3] = {0, 1, 2};
    myCollection[2] = 4;

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
cout << "mySpaceship" << endl;

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
