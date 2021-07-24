#include "Mushroom.h"

Mushroom::Mushroom() : GameObject() {
    srand(time(0));

    int x = rand()%800;
    int y = rand()%800;

    point.setX(x);
    point.setY(y);
}

void Mushroom::draw() {
    DrawSquare(point.getX() , point.getY(), 11, colors[this->color]);
}
