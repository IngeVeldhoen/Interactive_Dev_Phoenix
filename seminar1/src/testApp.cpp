#include "testApp.h"

class Car{
public:
    ofColor col;
    float xpos;
    float ypos;
    float speed;
Car(){
}
    Car(float xpos_, float ypos_, float speed_)
    // { = scope operato that extends untill it finds a matching closing opposite direction
    {
    //what lives in a function dies in a function
    // contructeor is a function
    xpos = xpos_;
    ypos = ypos_;
    speed = speed_;


    }
    void draw(){
    xpos = xpos + speed;
    ofEllipse(xpos, ypos, 50,50);
    };
    void changeSpeed(float speed_){
    speed = speed_;
    }
};
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


}
};





float xpos = 100.0;
float ypos = 100.0;
float speed = 0.5;
Car myCar;
Car myCar2;
Car myCar3;
//--------------------------------------------------------------
void testApp::setup(){
//Mis en place
//ofSetBackgroundAuto(false);
// by creating an instance of the Car class, i run the constructor of the class and pass in the values required by the constructor's signiture
myCar = Car(xpos, ypos, speed);
myCar2 = Car(xpos+10, ypos+150, speed+3);
myCar3 = Car(xpos-10, ypos+520, speed+1);
ofBackground(200,100,0);

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
ofColor col = ofColor(0,255,255);
ofSetColor(col);
//ofEllipse(xpos,mouseY,100,100);
myCar.draw();
myCar2.draw();
myCar3.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
cout << key << endl;

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
//xpos +=20;
//ypos +=20;
//myCar.changeSpeed(1.0);
//myCar2.changeSpeed(0.7);
//myCar3.changeSpeed(1.7);
float randx = ofRandom(0, ofGetWidth());
float randy = ofRandom(0, ofGetHeight());
myCar.xpos = randx;
myCar2.ypos = randy;
myCar.speed =ofRandom(0.05, 1.0);
myCar2.speed=ofRandom(1.0, 2.0);
myCar3.speed=ofRandom(0.05, 1.0);

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
