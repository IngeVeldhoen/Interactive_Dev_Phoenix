#include "testApp.h"

class Pet{
public:
    string name;
    int age;

Pet(string name_, int age_){
    name = name_;
    age = age_;
}
Pet(){}

    //this method MUST be defind in my children
    void virtual eat() = 0;
    /*void virutal Pet::eat(){
    cout << " I'll eat anything " << endl;
    }*/

    //all children will be able to play
    void play(){
    cout<< "I love playing with my human!" << endl;
    }
    void virtual draw(){
    ofSetColor(0);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 50, 50);
    }
    //This is a default. code will run if the children
    //do not have a method die
    void virtual die(){
    cout << name << " died " <<endl;
    }
};

class Cat: public Pet{
public:
    Cat(string name_, int age_){
        name = name_;
        age = age_;
    }
    Cat(){}

    void eat(){
    cout << "I will only eat meaty things and occationally my mom's popcorn" << endl;
    }
    void draw(){
    ofSetColor(ofColor::teal);
    ofRect(ofGetWidth()/2, ofGetHeight()/2, 60,60);
    }
};

class Dog: public Pet{
public:
Dog(string name_, int age_){
name = name_;
age = age_;
}
Dog(){}

void eat(){
cout << "I will eat anything because I'm a boss" << endl;
}
void draw(){
ofSetColor(ofColor::orange);
ofCircle(ofGetWidth()/2, ofGetHeight()/2, 200);
}
};

Pet *currentPet; // never directly instantiated, needs * because virtual
Cat jack;
Dog sam;
//--------------------------------------------------------------
void testApp::setup(){
jack = Cat("jack", 10);
jack.eat();
jack.play();


currentPet = &jack;

currentPet->die();

sam = Dog("sam", 0);
currentPet = &sam;
currentPet->eat();
currentPet->die();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
currentPet->draw();


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
float r = ofRandom(0.0,1.0);
if (r < .66) {
    currentPet = &jack;

}
else{
currentPet = &sam;
}
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
