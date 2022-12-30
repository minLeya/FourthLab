#ifndef FUNCTIONS_FOR_MODIFICATION_H
#define FUNCTIONS_FOR_MODIFICATION_H
#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include <SFML/Graphics.hpp>
#include <array>
#include <vector>

//circle
void creatingCircles(std::vector<Circle>& arrayOfCircles);
void increaseRadiusOfCircle(std::vector<Circle>& arrayOfCircles);
void decreaseRadiusOfCircle(std::vector<Circle>& arrayOfCircles);
void creatingOneCircle(std::array<Circle*, 3>& arrayOfCirclePointers);
void decreaseRadiusOfArrayOfCircles(std::vector<std::array<Circle*, 3>>& vectorOfArraysOfCirclePointers);
void increaseRadiusOfArrayOfCircles(std::vector<std::array<Circle*, 3>>& vectorOfArraysOfCirclePointers);

//ellipse
void creatingEllipse(std::vector<Ellipse>& arrayOfEllipse);
void creatingOneEllipse(std::array<Ellipse*, 3>& arrayOfEllipsePointers);
void rotateEllipse(std::vector<Ellipse>& arrayOfEllipse);
void rotateArrayOfEllipse(std::vector<std::array<Ellipse*, 3>>& vectorOfArraysOfEllipsePointers);

//qudrangle
void creatingQuadrangle(std::vector<Quadrangle>& arrayOfQuadrangle);
void creatingOneQuadrangle(std::array<Quadrangle*, 3>& arrayOfQuadranglePointers);

//rectangle
void creatingRectangle(std::vector<Rectangle>& arrayOfRectangle);
void creatingOneRectangle(std::array<Rectangle*, 3>& arrayOfRectanglePointers);
void increaseHeightOfRectangle(std::vector<Rectangle>& arrayOfRectangle);
void decreaseHeightOfRectangle(std::vector<Rectangle>& arrayOfRectangle);
void increaseLengthOfRectangle(std::vector<Rectangle>& arrayOfRectangle);
void decreaseLengthOfRectangle(std::vector<Rectangle>& arrayOfRectangle);
void increaseHeightOfArrayOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers);
void decreaseHeightOfArrayOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers);
void increaseLengthOfArraysOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers);
void decreaseLengthOfArraysOfRectangle(std::vector<std::array<Rectangle*, 3>>& vectorOfArraysOfRectanglePointers);

//trapezoid
void creatingTrapezoid(std::vector<Trapezoid>& arrayOfTrapezoid);
void creatingOneTrapezoid(std::array<Trapezoid*, 3>& arrayOfTrapezoidPointers);
void increaseHeightOfTrapezoid(std::vector<Trapezoid>& arrayOfTrapezoid);
void decreaseHeightOfTrapezoid(std::vector<Trapezoid>& arrayOfTrapezoid);

//rhomb
void creatingRhomb(std::vector<Rhomb>& arrayOfRhomb);
void creatingOneRhomb(std::array<Rhomb*, 3>& arrayOfRhombPointers);
void changeHorizontalDiagonal(std::vector<Rhomb>& arrayOfRhomb);
void changeVerticalDiagonal(std::vector<Rhomb>& arrayOfRhomb);

#endif