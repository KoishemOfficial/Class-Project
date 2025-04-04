#pragma once

#include <string>

using namespace std;

class Point
{
	double x, y, z;

public:
	void printX();
	void printY();
	void printZ();
	void printPoint();
	double getX();
	double getY();
	double getZ();
	void setX(double val);
	void setY(double val);
	void setZ(double val);

	void exportPoint(const string& filename);
	void importPoint(const string& filename);

	Point();
};

