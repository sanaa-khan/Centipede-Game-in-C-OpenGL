/*
 * Board.cpp
 *
 *  Created on: May 2, 2014
 *      Author: Sibt ul Hussain
 */

#include "Board.h"
#include <cstdio>

// Asteroids board

// Note that all these enum constants from NILL onwards
// have been given numbers in increasing order
// e.g. NILL=0, and so on
// and these numbers are represented in the board array...
enum BoardParts {
	NILL, S_BRICK, G_BRICK, R_BRICK
};
// defining some utility functions...

/* board_array[Board::BOARD_Y][Board::BOARD_X] = { { 0 } };*/

// Destructor
Board::~Board(void) {
}
void Board::InitalizeBoard(int w, int h) {
	cout << "Initialize board" << endl;
	width = w;
	height = h;
	for (int i = 0; i < BOARD_Y - 1; ++i) {
		for (int j = 0; j < BOARD_X; ++j) {
			// can use G_BRICK, R_BRICK, or S_BRICK here
		//	board_array[i][j] = 0;
		}
	}
}
//Constructor
Board::Board(int xsize, int ysize) : s(), c() {
	cout << "Constructor board" << endl;
	xcellsize = xsize;
	ycellsize = ysize;
	pcolor = CHOCOLATE;
	bcolor = ORANGE_RED;
	gcolor = PINK;
	for (int i = 0; i < BOARD_Y; ++i)
		for (int j = 0; j < BOARD_X; ++j)
			board_array[i][j] = 0;
//set up board

    srand(time(NULL));

    numberOfMushrooms = 20 + rand() % 11;

    gameObjects = new Mushroom[numberOfMushrooms];

    for (int i = 0; i < numberOfMushrooms; i++) {

        int x = 50 + rand() % 900;
        int y = 20 + rand() % 900;

        gameObjects[i].setPoint(x, y);

        board_array[x/10][y/10] = 10;
        board_array[x/10 + 5][y/10] = 10;
        board_array[x/10 - 5][y/10] = 10;
        board_array[x/10][y/10 + 5] = 10;
        board_array[x/10][y/10 - 5] = 10;
    }

    moveableObjects = new Player;
    int x = moveableObjects->getPoint().getX();
    int y = moveableObjects->getPoint().getY();
    board_array[x/10][y/10] = 11;

    int xx = c.getMagicSeg().getX();
    int yy = c.getMagicSeg().getY();

    board_array[xx/10][yy/10] = 12;

    for (int i = 0; i < c.getNoOfSegments(); i++) {
        int x = c.getLazySeg(i).getX();
        int y = c.getLazySeg(i).getY();

        board_array[x/10][y/10] = 13;
    }
}

void Board::Draw() {
	glColor3f(0, 0, 1);
	glPushMatrix();
/*
	for (int i = BOARD_Y - 2, y = 0; i >= 0; --i, y += xcellsize) {
		for (int j = 0, x = 0; j < BOARD_X; j++, x += (ycellsize)) {
			//			cout <<      " " << board_array[i][j] << " " << flush;
			switch (board_array[i][j]) {
			case NILL:
				// Empty space
				break;
			case S_BRICK:
				DrawRectangle(x - 10, y, ycellsize, xcellsize,
						colors[SLATE_GRAY]);
				//DrawLine(x - 10, y, x - 10 + ycellsize, y, 4, colors[BLACK]);
				break;
			case G_BRICK:
				DrawRectangle(x - 10, y, ycellsize, xcellsize,
						colors[LIGHT_GREEN]);
				break;
			case R_BRICK:
				DrawRectangle(x - 10, y, ycellsize, xcellsize, colors[RED]);
				break;
			}
		}
	} */

    for (int i = 0; i < numberOfMushrooms; i++)
        gameObjects[i].draw();

    s.draw();
    c.draw();
     c.move();
    moveableObjects->draw();

	glPopMatrix();
}

void Board::setDirection(int d) {
    this->moveableObjects->setDirection(d);
}
/*
void Board::setBlinker() {
    if (c.getHead().isBlinking1())
        c.getHead().setIsBlinking(false);
    else
        c.getHead().setIsBlinking(true);
} */

void Board::Move() {

    int x = moveableObjects->getPoint().getX();
    int y = moveableObjects->getPoint().getY();
    board_array[x/10][y/10] = 0;

    this->moveableObjects->move();

    int xx = moveableObjects->getPoint().getX();
    int yy = moveableObjects->getPoint().getY();

    if (board_array[xx/10][yy/10] == 10)
        this->moveableObjects->setPoint(x, y);
    else
        board_array[xx/10][yy/10] == 11;

}

void Board::MoveCentipede() {
    c.move();

    int xx = c.getHead().getPoint().getX();
    int yy = c.getHead().getPoint().getY();

    if (board_array[xx/10][yy/10] == 10) {
        c.changeDirections();
    }


}
/*
void Board::shoot() {
    b.setPoint(this->moveableObjects->getPoint().getX(), this->moveableObjects->getPoint().getY());
    b.draw();
    b.move();
} */

void Board::GetInitTextPosition(int &x, int &y) {
	x = xcellsize;
	y = (BOARD_Y - 1) * ycellsize + ycellsize / 2;
}
