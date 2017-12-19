#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    
    int numParticles = 350;
    for (int i = 0; i < numParticles; i++) {
        FireworkParticle firework;
        fireworks.push_back(firework);
    }
    

    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0, 18);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].draw();
    }

   

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    fireworksRestart();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

void ofApp::fireworksRestart() {
    ofPoint position;
    position.set(ofGetMouseX(), ofGetMouseY());
    
    ofColor fireworkColor;
    fireworkColor.setHsb(ofRandom(255), 255, 192);
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].setup(position.x, position.y, fireworkColor);
    }
}

