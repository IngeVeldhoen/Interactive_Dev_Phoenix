#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    camWidth 		= 640;	// try to grab at this size.
	camHeight 		= 480;

    w = ofGetWidth();
    h = ofGetHeight();

    ofEnableSmoothing();

	vidGrabber.setDeviceID(0);
	vidGrabber.setDesiredFrameRate(60);
	vidGrabber.initGrabber(camWidth,camHeight);

	for (int i=0; i<NUM_PARTICLES; i++) {
        particles[i].set(ofRandomWidth(), ofRandomHeight());
    }



}

//--------------------------------------------------------------
void testApp::update(){
	vidGrabber.update();

    for (int i=0; i<NUM_PARTICLES; i++) {

    ofColor color =
vidGrabber.getPixelsRef().getColor(particles[i].x,particles[i].y);
    float brightness = color.getBrightness();

    float angle = ofMap(brightness,0,255,0,TWO_PI);

    particles[i].speed.set(cos(angle),sin(angle));
    particles[i] += particles[i].speed;


    if (particles[i].x<0 || particles[i].x>w) particles[i].x =
ofRandom(vidGrabber.width);
    if (particles[i].y<0 || particles[i].y>h) particles[i].y =
ofRandom(vidGrabber.height);
}


}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetHexColor(0xffffff);
	//vidGrabber.draw(0,0);

	for (int y=0; y<h; y+=10) {
        for (int x=0; x<w; x+=10) {
            float brightness = vidGrabber.getPixelsRef().getColor(x,y).getBrightness();
           // float radius = ofMap(brightness,0,255,0,5);
            float angle = ofMap(brightness,0,255,0,360);
            ofSetColor(ofColor::fromHsb(brightness,255,255));
          //  ofCircle(x,y,4);

            ofPushMatrix();
            ofTranslate(x,y);
            ofRotateZ(angle);
            ofLine(-4,0,4,0);
            ofPopMatrix();
        }
    }

    for (int i=0; i<NUM_PARTICLES; i++) {
        ofCircle(particles[i],2);
    }


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
