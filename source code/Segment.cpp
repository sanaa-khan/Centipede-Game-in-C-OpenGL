#include "Segment.h"

Segment::Segment() : MoveableObject() {}

Segment::Segment(int xx, int yy) : MoveableObject(xx, yy) {}

void Segment::move() {
    switch(this->getDirection()) {
        case 1: //right
            if (this->getPoint().getX() < 980)
                setPoint(this->getPoint().getX() + 20, this->getPoint().getY());
            else {
                setPoint(this->getPoint().getX(), this->getPoint().getY() - 20);
                this->setDirection(2);
            }

            break;

        case 2: //left
            if (this->getPoint().getX() > 20)
                setPoint(this->getPoint().getX() - 20, this->getPoint().getY());
            else {
                setPoint(this->getPoint().getX(), this->getPoint().getY() - 20);
                this->setDirection(1);
            }

            break;
    }
}

void Segment::draw() {
    DrawCircle(this->getPoint().getX(),this->getPoint().getY(),10,colors[this->getColor()]);
}
