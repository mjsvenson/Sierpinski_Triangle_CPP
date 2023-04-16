/**********************************************************************
 *  readme 
 *  Recursive Graphics (Triangle Fractal)                       
 **********************************************************************/

Your name: Matthew Svenson

 The purpose of this assignment was to create a recursive function that draws a Sierpinski
 triangle to the screen. I accomplished exactly as the assignment was set out to do, and added
 color to the triangle as well as a feature in which the dimensions of the window
 is created based off of the length of the triangle. 


 To add colors, I added a new parameter to the Triangle class constructor which takes a
 sf::Color data type and uses that sf::Color to color the outlines of the triangle. As well
 as that feature, the window size is dependent on the length of the triangle that is created. 
 This feature takes the length of the triangle, finds the center and finds the right dimensions
 through calculation.

/**********************************************************************
* How to run the project.
 **********************************************************************/

1.	In the linux terminal, navigate to this folder
2.	type "make" into the terminal
3.	type ./TFractal [Length in Pixels] [Num of Recrusions] 
