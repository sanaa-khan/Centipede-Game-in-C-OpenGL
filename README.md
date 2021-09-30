# Centipede-Game-in-C-OpenGL
A simple shooter game, developed in C++ and OpenGL

### How to run: <br>
  1: Install libraries by running "bash install-libraries.sh" in the terminal.<br>
  2: Run "make clean" then "make"<br>
  3: "game" executable will be created<br>
  
  
### Classes: <br>
##### Board: Represents the game board, with the current state, and has a polymorphic array that contains objects e.g. mushroom, player, bullet etcetera. Has methods for drawing, moving objects, shooting and so on. <br>
##### Bullet: Represents a bullet <br>
##### Centipede: Represents a centipede <br>
##### Flea: Represents a flea <br>
##### Mushroom: Represents a mushroom <br>
##### Player: Represents a gme player <br>
##### GameObject: The base class for any object in the game - other classes are derived from this <br>
##### Segment: Base class for representing a segment of a centipede <br>
##### LazySeg: A lazy segment in a centipede <br>
##### MagicSeg: A magic segment in a centipede <br>
##### MoveableObject: The base class for any moveable object in the game e.g. player, bullet, centipede 

## Contact
Need help? Got any queries? Feel free to hit me up at sanakahnn@gmail.com.
