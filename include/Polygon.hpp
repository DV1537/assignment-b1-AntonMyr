#ifndef POLYGON_H
#define POLYGON_H

#include <string>
#include "Shape.hpp"

class Polygon : public Shape {
private:
  bool convex;
  bool regular = true;
  bool convexHasBeenRun = false;
  bool positionHasBeenRun = false;
  friend std::ostream& operator<< (std::ostream& stream, const Polygon &Plgn);

public:

  Polygon();
  Polygon(Coordinate *coords, int coordsSize);
  Polygon(const Polygon &source);
  Polygon& operator=(const Polygon& source);
  Polygon operator+(const Polygon &p2);

  std::string getType();
  float area();
  float circumference();
  Coordinate position();
  bool isConvex();
  float distance(Shape *s);
  ~Polygon();

};

#endif
