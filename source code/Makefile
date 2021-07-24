CXXFLAGS =	-g3 -Wall -fmessage-length=0 #-Werror

OBJS =		Position.o GameObject.o MoveableObject.o Player.o Bullet.o Mushroom.o ScoreBoard.o Segment.o MagicSeg.o LazySeg.o Centipede.o Board.o util.o game.o

LIBS = -L/usr/X11R6/lib -L/sw/lib -L/usr/sww/lib -L/usr/sww/bin -L/usr/sww/pkg/Mesa/lib -lglut -lGLU -lGL -lX11 -lfreeimage -pthread



TARGET =	game


$(TARGET):	$(OBJS) 
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
