// Copyright 2022 Matthew Svenson
#include "Triangle.h"

void fTree(double L, int Rec, double x, double y, sf::Color color);

// Used to display triangles from the function
std::vector<Triangle> TList;

int main(int argc, char * argv[]) {
// Calculate window size
double size = std::stod(argv[1])*3;

// Arguments include (Length, Recursions, Center X, Center Y)
fTree(std::stod(argv[1]), std::stoi(argv[2]), size/2.0,
size/2.0, sf::Color::Black);

// Window creation
sf::RenderWindow window(sf::VideoMode(size, size), "Sierpinski Triangle");
while (window.isOpen()) {
sf::Event event;
while (window.pollEvent(event)) {
if (event.type == sf::Event::Closed)
window.close();
}
window.clear(sf::Color::White);
// Draw all the triangles in the list
for (int i = 0; i < static_cast<int>(TList.size()); i++)
window.draw(TList.at(i));
window.display();
}
}

void fTree(double L, int Rec, double x, double y, sf::Color color) {
// Make a new triangle, add it into the list
TList.push_back(*(new Triangle(L, x, y, color)));

if (Rec == 0) return;

// Height is needed for calculating new coords
double H = (sqrt(3.0)/2.0)*L;

// First tree created is top left tree
fTree(L/2.0, Rec-1, x-(L/2.0), y-((2.0/3.0)*H), sf::Color::Red);

// Second tree created is top right
fTree(L/2.0, Rec-1, x+((3.0/4.0)*L), y-((1.0/6.0)*H), sf::Color::Blue);

// Third tree is created at the bottom
fTree(L/2.0, Rec-1, x-((1.0/4.0)*L), y+(5.0/6.0)*H, sf::Color::Green);
}
