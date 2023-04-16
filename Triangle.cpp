// Copyright 2022 Matthew Svenson
#include "Triangle.h"

Triangle::Triangle(double ilength, double xcenter,
 double ycenter, sf::Color a) {
length = ilength;
x = xcenter;
y = ycenter;
color = a;
}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const {
sf::ConvexShape t;

t.setPointCount(3);

// Make it black, make the outline THICK
t.setOutlineColor(color);
t.setOutlineThickness(1);

// To find where this triangle goes, we need the height
double H = (sqrt(3.0)/2.0) * length;

// These just represent vertices of the triangle (a,b,c)
// and their coordinates
double xa, ya;
xa = x - (length/2.0);
ya = y - (H/3.0);

double xb, yb;
xb = x + (length/2.0);
yb = y - (H/3.0);

// xc IS JUST EQUAL TO X (no xc variable needed)
double yc;
yc = y + ((2.0/3.0)*H);

// Now lets actually set these points.....
t.setPoint(0, sf::Vector2f(xa, ya));
t.setPoint(1, sf::Vector2f(xb, yb));
t.setPoint(2, sf::Vector2f(x, yc));

// DRAW IT!
target.draw(t, states);
}
