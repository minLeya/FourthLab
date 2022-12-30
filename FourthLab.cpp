#include <SFML/Graphics.hpp>
#include "Figure.h"
#include "Coordinates.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include "functionsForModification.h"
#include "functionsForMovement.h"
#include "arbitrary.h"
#include <vector>
#include <array>
#include <iostream>
#include <memory>


int main()
{
    sf::RenderWindow window(sf::VideoMode(sizes::windowLength, sizes::windowWidth), "window");
    window.setFramerateLimit(60);

    std::vector<Circle> arrayOfCircles;
    std::vector<Ellipse> arrayOfEllipse;
    std::vector<Quadrangle> arrayOfQuadrangle;
    std::vector<Rectangle> arrayOfRectangle;
    std::vector<Trapezoid> arrayOfTrapezoid;
    std::vector<Rhomb> arrayOfRhomb;

    std::array<Circle*, 3> arrayOfCirclePointers{};
    std::array<Ellipse*, 3> arrayOfEllipsePointers{};
    std::array<Quadrangle*, 3> arrayOfQuadranglePointers{};
    std::array<Rectangle*, 3> arrayOfRectanglePointers{};
    std::array<Trapezoid*, 3> arrayOfTrapezoidPointers{};
    std::array<Rhomb*, 3> arrayOfRhombPointers{};

    std::vector<std::array<Circle*, 3>> vectorOfArraysOfCirclePointers{};
    std::vector<std::array<Ellipse*, 3>> vectorOfArraysOfEllipsePointers{};
    std::vector<std::array<Quadrangle*, 3>> vectorOfArraysOfQuadranglePointers{};
    std::vector<std::array<Rectangle*, 3>> vectorOfArraysOfRectanglePointers{};
    std::vector<std::array<Trapezoid*, 3>> vectorOfArraysOfTrapezoidPointers{};
    std::vector<std::array<Rhomb*, 3>> vectorOfArraysOfRhombPointers{};

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            if (event.type == event.KeyPressed)
            {
                //CIRCLE
                creatingCircles(arrayOfCircles);
                increaseRadiusOfCircle(arrayOfCircles);
                decreaseRadiusOfCircle(arrayOfCircles);
                //moveShapesRightNum(arrayOfCircles);

                //movement
                moveShapesDown(arrayOfCircles);
                moveShapesLeft(arrayOfCircles);
                moveShapesUp(arrayOfCircles);
                moveShapesRight(arrayOfCircles);

                //for popping one circle
                creatingOneCircle(arrayOfCirclePointers);
                movement(arrayOfCirclePointers);

                //for arrays of circles
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
                {
                    creatingArray(vectorOfArraysOfCirclePointers);
                }
                increaseRadiusOfArrayOfCircles(vectorOfArraysOfCirclePointers);
                decreaseRadiusOfArrayOfCircles(vectorOfArraysOfCirclePointers);
                moveThreeShapesDown(vectorOfArraysOfCirclePointers);
                moveThreeShapesUp(vectorOfArraysOfCirclePointers);
                moveThreeShapesRight(vectorOfArraysOfCirclePointers);
                moveThreeShapesLeft(vectorOfArraysOfCirclePointers);


                //ELLIPSE
                creatingEllipse(arrayOfEllipse);
                rotateEllipse(arrayOfEllipse);

                moveShapesDown(arrayOfEllipse);
                moveShapesUp(arrayOfEllipse);
                moveShapesRight(arrayOfEllipse);
                moveShapesLeft(arrayOfEllipse);

                creatingOneEllipse(arrayOfEllipsePointers);
                movement(arrayOfEllipsePointers);

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
                {
                    creatingArray(vectorOfArraysOfEllipsePointers);
                }
                rotateArrayOfEllipse(vectorOfArraysOfEllipsePointers);
                moveThreeShapesDown(vectorOfArraysOfEllipsePointers);
                moveThreeShapesLeft(vectorOfArraysOfEllipsePointers);
                moveThreeShapesRight(vectorOfArraysOfEllipsePointers);
                moveThreeShapesUp(vectorOfArraysOfEllipsePointers);

                //quadrangle
                creatingQuadrangle(arrayOfQuadrangle);
                moveShapesDown(arrayOfQuadrangle);
                moveShapesLeft(arrayOfQuadrangle);
                moveShapesRight(arrayOfQuadrangle);
                moveShapesUp(arrayOfQuadrangle);

                creatingOneQuadrangle(arrayOfQuadranglePointers);
                movement(arrayOfQuadranglePointers);

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
                {
                    creatingArray(vectorOfArraysOfQuadranglePointers);
                }
                moveThreeShapesDown(vectorOfArraysOfQuadranglePointers);
                moveThreeShapesUp(vectorOfArraysOfQuadranglePointers);
                moveThreeShapesLeft(vectorOfArraysOfQuadranglePointers);
                moveThreeShapesRight(vectorOfArraysOfQuadranglePointers);

                //rectangle
                creatingRectangle(arrayOfRectangle);
                increaseHeightOfRectangle(arrayOfRectangle);
                decreaseHeightOfRectangle(arrayOfRectangle);
                increaseLengthOfRectangle(arrayOfRectangle);
                decreaseLengthOfRectangle(arrayOfRectangle);

                moveShapesDown(arrayOfRectangle);
                moveShapesRight(arrayOfRectangle);
                moveShapesLeft(arrayOfRectangle);
                moveShapesUp(arrayOfRectangle);

                creatingOneRectangle(arrayOfRectanglePointers);
                movement(arrayOfRectanglePointers);
                //movement1(arrayOfRectanglePointers);

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
                {
                    creatingArray(vectorOfArraysOfRectanglePointers);
                }
                moveThreeShapesDown(vectorOfArraysOfRectanglePointers);
                moveThreeShapesLeft(vectorOfArraysOfRectanglePointers);
                moveThreeShapesRight(vectorOfArraysOfRectanglePointers);
                moveThreeShapesUp(vectorOfArraysOfRectanglePointers);

                increaseHeightOfArrayOfRectangle(vectorOfArraysOfRectanglePointers);
                decreaseHeightOfArrayOfRectangle(vectorOfArraysOfRectanglePointers);
                increaseLengthOfArraysOfRectangle(vectorOfArraysOfRectanglePointers);
                decreaseLengthOfArraysOfRectangle(vectorOfArraysOfRectanglePointers);


                //trapezoid
                creatingTrapezoid(arrayOfTrapezoid);
                increaseHeightOfTrapezoid(arrayOfTrapezoid);
                decreaseHeightOfTrapezoid(arrayOfTrapezoid);

                moveShapesDown(arrayOfTrapezoid);
                moveShapesUp(arrayOfTrapezoid);
                moveShapesRight(arrayOfTrapezoid);
                moveShapesLeft(arrayOfTrapezoid);

                creatingOneTrapezoid(arrayOfTrapezoidPointers);
                movement(arrayOfTrapezoidPointers);

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
                {
                    creatingArray(vectorOfArraysOfTrapezoidPointers);
                }
                moveThreeShapesDown(vectorOfArraysOfTrapezoidPointers);
                moveThreeShapesUp(vectorOfArraysOfTrapezoidPointers);
                moveThreeShapesLeft(vectorOfArraysOfTrapezoidPointers);
                moveThreeShapesRight(vectorOfArraysOfTrapezoidPointers);

                //rhomb
                creatingRhomb(arrayOfRhomb);
                changeHorizontalDiagonal(arrayOfRhomb);
                changeVerticalDiagonal(arrayOfRhomb);

                moveShapesDown(arrayOfRhomb);
                moveShapesUp(arrayOfRhomb);
                moveShapesRight(arrayOfRhomb);
                moveShapesLeft(arrayOfRhomb);


                creatingOneRhomb(arrayOfRhombPointers);
                movement(arrayOfRhombPointers);
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
                {
                    creatingArray(vectorOfArraysOfRhombPointers);
                }

                moveThreeShapesDown(vectorOfArraysOfRhombPointers);
                moveThreeShapesUp(vectorOfArraysOfRhombPointers);
                moveThreeShapesLeft(vectorOfArraysOfRhombPointers);
                moveThreeShapesRight(vectorOfArraysOfRhombPointers);

            }
        }
        window.clear();

        //for rendering shapes one by one
        for (auto& circle : arrayOfCircles)
        {
            window.draw(circle.returnCircle());
        }
        for (auto& ellipse : arrayOfEllipse)
        {
            window.draw(ellipse.returnEllipse());
        }
        for (auto& quadrangle : arrayOfQuadrangle)
        {
            window.draw(quadrangle.returnQuadrangle());
        }
        for (auto& rectangle : arrayOfRectangle)
        {
            window.draw(rectangle.returnRectangle());
        }
        for (auto& trapezoid : arrayOfTrapezoid)
        {
            window.draw(trapezoid.returnTrapezoid());
        }
        for (auto& rhomb : arrayOfRhomb)
        {
            window.draw(rhomb.returnRhomb());
        }



        for (auto& circlePtr : arrayOfCirclePointers)
        {
            if (circlePtr != nullptr && circlePtr->isShown)
            {
                window.draw(circlePtr->returnCircle());
            }
        }
        for (auto& ellipsePtr : arrayOfEllipsePointers)
        {
            if (ellipsePtr != nullptr && ellipsePtr->isShown)
            {
                window.draw(ellipsePtr->returnEllipse());
            }
        }
        for (auto& quadranglePtr : arrayOfQuadranglePointers)
        {
            if (quadranglePtr != nullptr && quadranglePtr->isShown)
            {
                window.draw(quadranglePtr->returnQuadrangle());
            }
        }
        for (auto& rectanglePtr : arrayOfRectanglePointers)
        {
            if (rectanglePtr != nullptr && rectanglePtr->isShown)
            {
                window.draw(rectanglePtr->returnRectangle());
            }
        }
        for (auto& trapezoidPtr : arrayOfTrapezoidPointers)
        {
            if (trapezoidPtr != nullptr && trapezoidPtr->isShown)
            {
                window.draw(trapezoidPtr->returnTrapezoid());
            }
        }
        for (auto& rhombPtr : arrayOfRhombPointers)
        {
            if (rhombPtr != nullptr && rhombPtr->isShown)
            {
                window.draw(rhombPtr->returnRhomb());
            }
        }



        for (auto& arrayOfCirclePtr : vectorOfArraysOfCirclePointers)
        {
            for (auto& circlePtr : arrayOfCirclePtr)
            {
                if (circlePtr != nullptr && circlePtr->isShown)
                {
                    window.draw(circlePtr->returnCircle());
                }
            }
        }
        for (auto& arrayOfEllipsePtr : vectorOfArraysOfEllipsePointers)
        {
            for (auto& ellipsePtr : arrayOfEllipsePtr)
            {
                if (ellipsePtr != nullptr && ellipsePtr->isShown)
                {
                    window.draw(ellipsePtr->returnEllipse());
                }
            }
        }
        for (auto& arrayOfQuadranglePtr : vectorOfArraysOfQuadranglePointers)
        {
            for (auto& quadranglePtr : arrayOfQuadranglePtr)
            {
                if (quadranglePtr != nullptr && quadranglePtr->isShown)
                {
                    window.draw(quadranglePtr->returnQuadrangle());
                }
            }
        }
        for (auto& arrayOfRectanglePtr : vectorOfArraysOfRectanglePointers)
        {
            for (auto& rectanglePtr : arrayOfRectanglePtr)
            {
                if (rectanglePtr != nullptr && rectanglePtr->isShown)
                {
                    window.draw(rectanglePtr->returnRectangle());
                }
            }
        }
        for (auto& arrayOfTrapezoidPtr : vectorOfArraysOfTrapezoidPointers)
        {
            for (auto& trapezoidPtr : arrayOfTrapezoidPtr)
            {
                if (trapezoidPtr != nullptr && trapezoidPtr->isShown)
                {
                    window.draw(trapezoidPtr->returnTrapezoid());
                }
            }
        }
        for (auto& arrayOfRhombPtr : vectorOfArraysOfRhombPointers)
        {
            for (auto& rhombPtr : arrayOfRhombPtr)
            {
                if (rhombPtr != nullptr && rhombPtr->isShown)
                {
                    window.draw(rhombPtr->returnRhomb());
                }
            }
        }



        window.display();
    }
    return 0;
}