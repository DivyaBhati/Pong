# Pong++

**What is it?**
Pong++ is an openFrameworks application built in C++.  This version of the popular game provides added accessibility in aesthetic customization through selection of game color schemes.  The user can also choose between playing against a CPU or playing two-player on the same keyboard.

**Development**
The application was built and tested using XCode 9.  The steps in development:
  1. Creating the game, paddle, and ball objects.
  2. Fabricating the physics of the ball to bounce off the edges and paddles.
  3. Adding selection screens to choose two-player or cpu and color schemes.
  4. Creating and importing custom images along with loading a custom font.

**Resources Used**
  * ofxTrueTypeFontUC: This is an addon that allows for the developer to load in custom fonts.  For Pong++ I used the [Gameplay.ttf](https://www.dafont.com/gameplay.font) font.
  * ofImage: The default image library that enables for the usage of custom images on the GUI.  The images are provided in the bin/data folder.
  * Adobe Photoshop: Used Photochop CC to create the title text along with several of the game icons.

**Requirements To Build It**
You must have openFrameworks installed and ofxTrueTypeFontUC installed as a local addon within the project.  The download link for it can be found [here](https://github.com/hironishihara/ofxTrueTypeFontUC).
