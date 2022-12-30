#include "functionsForMovement.h"

template <typename shapeName>
void movement(std::array<shapeName, 3>& arrayOfShapePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
    {
        for (auto& shapePtr : arrayOfShapePointers)
        {
            if (shapePtr != nullptr)
            {
                shapePtr->moveTo(rng::getFloat(-50, 50), rng::getFloat(-50, 50));
                shapePtr->initialization();
            }
        }
    }
}

template void movement(std::array<Circle*, 3>&);
template void movement(std::array<Ellipse*, 3>&);
template void movement(std::array<Quadrangle*, 3>&);
template void movement(std::array<Rectangle*, 3>&);
template void movement(std::array<Trapezoid*, 3>&);
template void movement(std::array<Rhomb*, 3>&);


template <typename ShapeName>
void moveShapesRight(std::vector<ShapeName>& arrayOfShapes)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        for (auto& shape : arrayOfShapes)
        {
            shape.moveTo(0.8f, 0.f);
            shape.initialization();
        }
    }
}

template void moveShapesRight(std::vector<Circle>&);
template void moveShapesRight(std::vector<Ellipse>&);
template void moveShapesRight(std::vector<Quadrangle>&);
template void moveShapesRight(std::vector<Rectangle>&);
template void moveShapesRight(std::vector<Trapezoid>&);
template void moveShapesRight(std::vector<Rhomb>&);


template <typename ShapeName>
void moveShapesLeft(std::vector<ShapeName>& arrayOfShapes)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        for (auto& shape : arrayOfShapes)
        {
            shape.moveTo(-0.8f, 0.f);
            shape.initialization();

        }
    }
}

template void moveShapesLeft(std::vector<Circle>&);
template void moveShapesLeft(std::vector<Ellipse>&);
template void moveShapesLeft(std::vector<Quadrangle>&);
template void moveShapesLeft(std::vector<Rectangle>&);
template void moveShapesLeft(std::vector<Trapezoid>&);
template void moveShapesLeft(std::vector <Rhomb>&);

template <typename ShapeName>
void moveShapesUp(std::vector<ShapeName>& arrayOfShapes)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        for (auto& shape : arrayOfShapes)
        {
            shape.moveTo(0.f, -0.8f);
            shape.initialization();

        }
    }
}

template void moveShapesUp(std::vector<Circle>&);
template void moveShapesUp(std::vector<Ellipse>&);
template void moveShapesUp(std::vector<Quadrangle>&);
template void moveShapesUp(std::vector<Rectangle>&);
template void moveShapesUp(std::vector<Trapezoid>&);
template void moveShapesUp(std::vector <Rhomb>&);


template <typename ShapeName>
void moveShapesDown(std::vector<ShapeName>& arrayOfShapes)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        for (auto& shape : arrayOfShapes)
        {
            shape.moveTo(0.f, 0.8f);
            shape.initialization();

        }
    }
}

template void moveShapesDown(std::vector<Circle>&);
template void moveShapesDown(std::vector<Ellipse>&);
template void moveShapesDown(std::vector<Quadrangle>&);
template void moveShapesDown(std::vector<Rectangle>&);
template void moveShapesDown(std::vector<Trapezoid>&);
template void moveShapesDown(std::vector <Rhomb>&);



template <typename ShapeName>
void creatingArray(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers)
{
    ShapeName firstShape{};
    ShapeName secondShape{};
    ShapeName thirdShape{};

    firstShape.show();
    secondShape.show();
    thirdShape.show();

    vectorOfArraysOfShapePointers.push_back(std::array<ShapeName*, 3>{ new ShapeName{ firstShape },
        new ShapeName{ secondShape }, new ShapeName{ thirdShape } });
}

template void creatingArray(std::vector<std::array<Circle*, 3>>&);
template void creatingArray(std::vector<std::array<Ellipse*, 3>>&);
template void creatingArray(std::vector<std::array<Quadrangle*, 3>>&);
template void creatingArray(std::vector<std::array<Rectangle*, 3>>&);
template void creatingArray(std::vector<std::array<Trapezoid*, 3>>&);
template void creatingArray(std::vector<std::array<Rhomb*, 3>>&);

//for movement 3 shapes
template <typename ShapeName>
void moveThreeShapesDown(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        for (auto& arrayOfShapePtr : vectorOfArraysOfShapePointers)
        {
            for (auto& shapePtr : arrayOfShapePtr)
            {
                if (shapePtr != nullptr && shapePtr->isShown)
                {
                    shapePtr->moveTo(0.f, 0.8f);
                    shapePtr->initialization();
                }
            }
        }

    }
}
template void moveThreeShapesDown(std::vector<std::array<Circle*, 3>>&);
template void moveThreeShapesDown(std::vector<std::array<Ellipse*, 3>>&);
template void moveThreeShapesDown(std::vector<std::array<Quadrangle*, 3>>&);
template void moveThreeShapesDown(std::vector<std::array<Rectangle*, 3>>&);
template void moveThreeShapesDown(std::vector<std::array<Trapezoid*, 3>>&);
template void moveThreeShapesDown(std::vector<std::array<Rhomb*, 3>>&);


template <typename ShapeName>
void moveThreeShapesUp(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        for (auto& arrayOfShapePtr : vectorOfArraysOfShapePointers)
        {
            for (auto& shapePtr : arrayOfShapePtr)
            {
                if (shapePtr != nullptr && shapePtr->isShown)
                {
                    shapePtr->moveTo(0.f, -0.8f);
                    shapePtr->initialization();
                }
            }
        }

    }
}
template void moveThreeShapesUp(std::vector<std::array<Circle*, 3>>&);
template void moveThreeShapesUp(std::vector<std::array<Ellipse*, 3>>&);
template void moveThreeShapesUp(std::vector<std::array<Quadrangle*, 3>>&);
template void moveThreeShapesUp(std::vector<std::array<Rectangle*, 3>>&);
template void moveThreeShapesUp(std::vector<std::array<Trapezoid*, 3>>&);
template void moveThreeShapesUp(std::vector<std::array<Rhomb*, 3>>&);



template <typename ShapeName>
void moveThreeShapesRight(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        for (auto& arrayOfShapePtr : vectorOfArraysOfShapePointers)
        {
            for (auto& shapePtr : arrayOfShapePtr)
            {
                if (shapePtr != nullptr && shapePtr->isShown)
                {
                    shapePtr->moveTo(0.8f, 0.f);
                    shapePtr->initialization();
                    //shapePtr->rhombInitialization();
                }
            }
        }

    }
}
template void moveThreeShapesRight(std::vector<std::array<Circle*, 3>>&);
template void moveThreeShapesRight(std::vector<std::array<Ellipse*, 3>>&);
template void moveThreeShapesRight(std::vector<std::array<Quadrangle*, 3>>&);
template void moveThreeShapesRight(std::vector<std::array<Rectangle*, 3>>&);
template void moveThreeShapesRight(std::vector<std::array<Trapezoid*, 3>>&);
template void moveThreeShapesRight(std::vector<std::array<Rhomb*, 3>>&);


template <typename ShapeName>
void moveThreeShapesLeft(std::vector<std::array<ShapeName*, 3>>& vectorOfArraysOfShapePointers)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        for (auto& arrayOfShapePtr : vectorOfArraysOfShapePointers)
        {
            for (auto& shapePtr : arrayOfShapePtr)
            {
                if (shapePtr != nullptr && shapePtr->isShown)
                {
                    shapePtr->moveTo(-0.8f, 0.f);
                    //shapePtr->moveTo(-0.8f, 0.f, true);
                    //shapePtr->vertexInitialization();
                    shapePtr->initialization();
                }
            }
        }

    }
}
template void moveThreeShapesLeft(std::vector<std::array<Circle*, 3>>&);
template void moveThreeShapesLeft(std::vector<std::array<Ellipse*, 3>>&);
template void moveThreeShapesLeft(std::vector<std::array<Quadrangle*, 3>>&);
template void moveThreeShapesLeft(std::vector<std::array<Rectangle*, 3>>&);
template void moveThreeShapesLeft(std::vector<std::array<Trapezoid*, 3>>&);
template void moveThreeShapesLeft(std::vector<std::array<Rhomb*, 3>>&);


//template <typename ShapeName>
//void initializationShape(std::vector<ShapeName>& arrayOfShapes)
//{
//
//}

//void moveShapesRightNum(std::vector<Circle>& arrayOfCircle)
//{
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
//    {
//        for (auto& circle : arrayOfCircle)
//        {
//            circle.moveTo(0.8f, 0.f);
//            circle.InitializatonCircle();
//        }
//    }
//}

//void movement1(std::array<Rectangle*, 3>& arrayOfShapePointers)
//{
//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
//    {
//        for (auto& shapePtr : arrayOfShapePointers)
//        {
//            if (shapePtr != nullptr)
//            {
//                shapePtr->moveTo(rng::getFloat(-50, 50), rng::getFloat(-50, 50));
//                
//                shapePtr->initialization();
//            }
//        }
//    }
//}