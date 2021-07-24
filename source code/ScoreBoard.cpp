#include "ScoreBoard.h"

ScoreBoard::ScoreBoard() : GameObject(10, 950, 3), lives(3), score(0) {}

int ScoreBoard::getLives() const {
    return lives;
}

void ScoreBoard::setLives(int lives) {
    ScoreBoard::lives = lives;
}

int ScoreBoard::getScore() const {
    return score;
}

void ScoreBoard::setScore(int score) {
    ScoreBoard::score = score;
}

void ScoreBoard::draw() {

    string str = "Lives = " + to_string(lives);
    DrawString( 50, 950, str, colors[LAVENDER_BLUSH]);

    str = "Score = " + to_string(score);
    DrawString( 200, 950, str, colors[MISTY_ROSE]);
}
