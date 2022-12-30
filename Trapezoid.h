#ifndef TRAPEZOID_H
#define TRAPEZOID_H
#include "Rectangle.h"
#include "arbitrary.h"
#include <iostream>


class Trapezoid : public Quadrangle
{
public:
	sf::ConvexShape m_trapezoid;
	sf::ConvexShape returnTrapezoid();
	bool isShown{};

	Trapezoid();

	void vertexInitialization();
	void initialization();

	//bool isFourPoint{ true };


	void show() override;
	//void moveTo(float add_x, float add_y) override;

	void changeHeight(float addHeight);
};

#endif