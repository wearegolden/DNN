#pragma once

//this class defines a point in 2D space

class Point {
protected:
	double x, y;

public:
	Point();
	Point(double, double);
	Point(Point*);
	~Point();
	bool operator==(Point);
	double getx(void);
	double gety(void);
	double distance(Point);
};