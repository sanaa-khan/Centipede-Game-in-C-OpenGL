//
// Created by sanakhan on 5/8/19.
//

#include "Bullet.h"

Bullet::Bullet() : MoveableObject() {}

int Bullet::getDirection() const {
    return MoveableObject::getDirection();
}

void Bullet::setDirection(int direction) {
    MoveableObject::setDirection(direction);
}

void Bullet::move() {
    while (this->getPoint().getX() < 990)
        setPoint(this->getPoint().getX(), this->getPoint().getY() + 10);

    this->setColor(BLACK);
}

void Bullet::draw() {
    DrawSquare(point.getX() , point.getY(), 5, colors[CADET_BLUE]);
}
