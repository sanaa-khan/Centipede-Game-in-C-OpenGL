#include "Centipede.h"

Centipede::Centipede() : head() {
    noOfSegments = 10;
    head.setDirection(1);
    head.setPoint(360, 900);
    head.setColor(76);

    segments = new LazySeg[noOfSegments];

    segments[0].setPoint(160, 900);
    segments[1].setPoint(180, 900);
    segments[2].setPoint(200, 900);
    segments[3].setPoint(220, 900);
    segments[4].setPoint(240, 900);
    segments[5].setPoint(260, 900);
    segments[6].setPoint(280, 900);
    segments[7].setPoint(300, 900);
    segments[8].setPoint(320, 900);
    segments[9].setPoint(340, 900);

    for (int i = 1; i < 10; i+=10) {
        segments[i].setDirection(1);
        segments[i].setColor(11);
    }
}

void Centipede::draw() {
    if (head.isBlinking1())
        head.setColor(34);

    head.draw();
    for (int i = 0; i < noOfSegments; i++)
        segments[i].draw();
}

void Centipede::move() {
    head.move();
    for (int i = 0; i < noOfSegments; i++)
        segments[i].move();
}

int Centipede::getNoOfSegments() const {
    return noOfSegments;
}

Position Centipede::getMagicSeg() const {
    return this->head.getPoint();
}

Position Centipede::getLazySeg(int i) const {
    return this->segments[i].getPoint();
}

void Centipede::setNoOfSegments(int noOfSegments) {
    Centipede::noOfSegments = noOfSegments;
}

bool Centipede::Blink() const {
    return head.isBlinking1();
}

void Centipede::setBlink(bool b) {
    head.setIsBlinking(b);
}

MagicSeg Centipede::getHead() const {
    return head;
}

void Centipede::changeDirections() {
    if (head.getDirection() == 1)
        head.setDirection(2);
    else
        head.setDirection(1);

    for (int i = 0; i < noOfSegments; i++) {
        if(segments[i].getDirection() == 1)
            segments[i].setDirection(2);
        else
            segments[i].setDirection(1);
    }
}
