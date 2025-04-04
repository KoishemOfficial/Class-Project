#pragma once
#include <iostream>

using namespace std;

class Student
{
	string name;
	string surname;
	string acronym;
	string birthday;
	int phone_num;
	string city;
	string country;
	string school;
	int group_num;

public:
	void printName();
	void printSurname();
	void printAcronym();
	void printBirthday();
	void printPhoneNum();
	void printCity();
	void printCountry();
	void printSchool();
	void printGroupNum();

	void printStudent();

	void setName(string val);
	void setSurname(string val);
	void setAcronym(string val);
	void setBirthday(string val);
	void setPhoneNum(int val);
	void setCity(string val);
	void setCountry(string val);
	void setSchool(string val);
	void setGroupNum(int val);

	string getName();
	string getSurname();
	string getAcronym();
	string getBirthday();
	int getPhoneNum();
	string getCity();
	string getCountry();
	string getSchool();
	int getGroupNum();

	Student();
};

