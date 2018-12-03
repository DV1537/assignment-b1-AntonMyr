#ifndef FIGURE_H
#define FIGURE_H

#include "Coordinate.hpp"
#include "Shape.hpp"

class Figure {
 private:
  Shape *shapeArr;
  int capacity;
  int capacityUsed;

  Coordinate getMax(char type);
  Coordinate getMin(char type);

 public:
  void addShape();
  void getBoundingBox();
};

#endif
