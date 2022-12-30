#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Circle.h"
#include "Figure.h"
#include <SFML/Graphics.hpp>

class Ellipse : public Circle
{
protected:
	//m_radius is in circle class
	float m_semiminorAxis;


public:
	sf::CircleShape m_ellipse{};
	sf::CircleShape returnEllipse();
	bool isShown{};
	float angle;


	//bool isFourPoint{ false };

	void initialization();
	void vertexInitialization();

	Ellipse();
	Ellipse(float mainX, float mainY, const sf::Color&, float radius, float semiminorAxis);

	void setPosition(float newX, float newY);
	void setColor(const sf::Color& color);
	void setRadius(float newRadius);

	void show() override;
	//void moveTo(float add_x, float add_y) override;

	void rotate();
};

#endif // !ELLIPSE_H
