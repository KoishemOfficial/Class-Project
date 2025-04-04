#include "Point.h"
#include <iostream>
#include <fstream>

using namespace std;

double Point::getX() {
	return x;
}
double Point::getY() {
	return y;
}
double Point::getZ() {
	return z;
}

void Point::setX(double val) {
	x = val;
}

void Point::setY(double val) {
	y = val;
}

void Point::setZ(double val) {
	z = val;
}

void Point::printPoint() {
	cout << x << ' ' << y << ' ' << z << '\n';
}

void Point::printX() {
	cout << x << '\n';
}

void Point::printY() {
	cout << y << '\n';
}

void Point::printZ() {
	cout << z << '\n';
}

Point::Point() {
	x = 0, y = 0, z = 0;
}

void Point::exportPoint(const string& filename) {
	ofstream file(filename);

	if (!file) {
		cout << "Couldn't create the file.";
		return;
	}

	file << x << " " << y << " " << z;
	cout << "Point exported\n";
	file.close();
}

void Point::importPoint(const string& filename){
	ifstream file(filename);

	if (!file) {
		cout << "Couldn't open the file.\n";
	}

	file >> x >> y >> z;

	cout << "Point imported\n";
	file.close();
}