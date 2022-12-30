#ifndef FUNCTIONS_FOR_SHAPES_H
#define FUNCTIONS_FOR_SHAPES_H

#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include <SFML/Graphics.hpp>
#include <array>
#include <vector>

template <typename shapeName>
void movement(std::array<shapeName, 3>& arrayOfShapePointers);

template <typename ShapeName>
void moveShapesRight(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void moveShapesLeft(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void moveShapesUp(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void moveShapesDown(std::vector<ShapeName>& arrayOfShapes);

template <typename ShapeName>
void creatingArray(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesDown(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesUp(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesRight(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

template <typename ShapeName>
void moveThreeShapesLeft(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers);

//void movement(std::array<Quadrangle*, 3>& arrayOfQuadranglePointers);

//void movement1(std::array<Rectangle*, 3>& arrayOfShapePointers);
//void moveShapesRightNum(std::vector<Circle>& arrayOfCircle);

//template <typename ShapeName>
//void initializationShape(std::vector<ShapeName>& arrayOfShapes);


#endif // !
