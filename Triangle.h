// Copyright 2022 Matthew Svenson
// To fix cpplint errors, the system headers are the order of the includes.
// The other error is something that is fixed in PSX check that first
#ifndef _HOME_OSBOXES_DESKTOP_PS3_TRIANGLE_H_
#define _HOME_OSBOXES_DESKTOP_PS3_TRIANGLE_H_
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
class Triangle : public sf::Drawable {
 public:
  Triangle(double ilength, double xcenter, double ycenter, sf::Color a);
  void draw(sf::RenderTarget& target, sf::RenderStates states) const;
 private:
  double length, x, y;
  sf::Color color;
};
#endif  // _HOME_OSBOXES_DESKTOP_PS3_TRIANGLE_H_
