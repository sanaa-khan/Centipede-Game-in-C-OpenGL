#include "MoveableObject.h"

MoveableObject::MoveableObject() : GameObject(300, 300, 11), direction(1) {}

MoveableObject::MoveableObject(int xx, int yy) : GameObject(xx, yy, 11 ), direction(1) {}

MoveableObject::MoveableObject(int xx, int yy, int c) : GameObject(xx, yy, c), direction(1) {}

int MoveableObject::getDirection() const {
    return direction;
}

void MoveableObject::setDirection(int direction) {
    MoveableObject::direction = direction;
}
