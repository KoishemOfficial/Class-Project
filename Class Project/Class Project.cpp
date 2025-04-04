#include <iostream>

#include "Point.h"
#include "Student.h"

using namespace std;

int main()
{
	Point p1;

	p1.printX();
	p1.printY();
	p1.printZ();

	double x = p1.getX();
	double y = p1.getY();
	double z = p1.getZ();

	cout << x << '\n';
	cout << y << '\n';
	cout << z << '\n';

	p1.setX(5.5);
	p1.setY(-5.5);
	p1.setZ(15.5);

	p1.printPoint();

	p1.exportPoint("export.txt");
	p1.importPoint("import.txt");

	p1.printPoint();

	Student student1;

	student1.setName("Andrey");
	student1.setSurname("Vesenkov");
	student1.setAcronym("Olegovich");
	student1.setBirthday("09-07-2007");
	student1.setPhoneNum(123456789);
	student1.setCity("Kryvyii Rig");
	student1.setCountry("Ukraine");
	student1.setSchool("DUET");
	student1.setGroupNum(411);

	student1.printName();
	student1.printSurname();
	student1.printAcronym();
	student1.printBirthday();
	student1.printPhoneNum();
	student1.printCity();
	student1.printCountry();
	student1.printSchool();
	student1.printGroupNum();

	student1.printStudent();
}
