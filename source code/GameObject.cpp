#include "GameObject.h"

GameObject::GameObject() : point(), color(5) {}

GameObject::GameObject(int xx, int yy) : point(xx, yy), color(5) {}

GameObject::GameObject(int xx, int yy, int c) : point(xx, yy), color(c) {}

Position GameObject::getPoint() const {
    return point;
}

void GameObject::setPoint(int xx, int yy) {
    point.setX(xx);
    point.setY(yy);
}

void GameObject::setColor(int c) {
    color = c;
}

int GameObject::getColor() const {
    return color;
}
