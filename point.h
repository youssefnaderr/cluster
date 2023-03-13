#pragma once
class point
{
private:
	float x;
	float y;



public:

	point();
	point(float, float);

	void setx(float);
	void sety(float);

	float getx();
	float gety();

	void display();

	float distance(point p);
};

