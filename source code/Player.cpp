#include "Player.h"

Player::Player() : MoveableObject(300, 300, 90) {}

int Player::getDirection() const {
    return this->getDirection();
}

void Player::setDirection(int direction) {
   this->setDirection(direction);
}

void Player::move() {

    switch (direction) {
        case 1: //up
            if (this->getPoint().getY() < 300)
                setPoint(this->getPoint().getX(), this->getPoint().getY() + 10);
            break;

        case 2: //right
            if (this->getPoint().getX() < 990)
             setPoint(this->getPoint().getX() + 10, this->getPoint().getY());
            break;

        case 3: //down
            if (this->getPoint().getY() > 10)
                setPoint(this->getPoint().getX(), this->getPoint().getY() - 10);
            break;

        case 4: //left
            if (this->getPoint().getX() > 10)
            setPoint(this->getPoint().getX() - 10, this->getPoint().getY());
            break;
    }
}

void Player::draw() {
    DrawCircle(this->getPoint().getX(), this->getPoint().getY(), 8, colors[this->getColor()]);
}