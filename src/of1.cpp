//
//  of1.cpp
//  CClabOF1
//
//  Created by Longze Xia on 2017/12/18.
//

#include "of1.hpp"
void FireworkParticle::setup(int x, int y, ofColor _color) {
    position.set(x, y);
    color = _color;
    
    alpha = 255;
    
}

void FireworkParticle::update() {
    
    velocity.set(sin(rotateDegree*ofRandom(0.8, 1.2))*80, cos(rotateDegree*ofRandom(0.8, 1.2))*80);
    position += velocity;
    
    alpha-=2.5;
}

void FireworkParticle::draw() {
    rotateDegree += 2;
    ofSetColor(color.r, color.g, color.b, alpha);
    ofDrawCircle(position, ofMap(alpha, 0, 255, 2, 10));
}



