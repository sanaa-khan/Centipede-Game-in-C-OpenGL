#include "Position.h"

Position::Position() : x(0), y(0) {}

Position::Position(int xx, int yy) : x(xx), y(yy) {}

void Position::setX(int xx) {
    x = xx;
}

int Position::getX() const {
    return x;
}

int Position::getY() const {
    return y;
}

void Position::setY(int yy) {
    y = yy;
}



