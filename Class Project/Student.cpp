#include "Student.h"
#include <iostream>

Student::Student() {
	name = "";
	surname = "";
	acronym = "";
	birthday = "";
	phone_num = 0;
	city = "";
	country = "";
	school = "";
	group_num = 0;
}

void Student::setName(string val) {
    name = val;
}

void Student::setSurname(string val) {
    surname = val;
}

void Student::setAcronym(string val) {
    acronym = val;
}

void Student::setBirthday(string val) {
    birthday = val;
}

void Student::setPhoneNum(int val) {
    phone_num = val;
}

void Student::setCity(string val) {
    city = val;
}

void Student::setCountry(string val) {
    country = val;
}

void Student::setSchool(string val) {
    school = val;
}

void Student::setGroupNum(int val) {
    group_num = val;
}

string Student::getName() {
    return name;
}

string Student::getSurname() {
    return surname;
}

string Student::getAcronym() {
    return acronym;
}

string Student::getBirthday() {
    return birthday;
}

int Student::getPhoneNum() {
    return phone_num;
}

string Student::getCity() {
    return city;
}

string Student::getCountry() {
    return country;
}

string Student::getSchool() {
    return school;
}

int Student::getGroupNum() {
    return group_num;
}

void Student::printName() {
    cout << "Name: " << name << endl;
}

void Student::printSurname() {
    cout << "Surname: " << surname << endl;
}

void Student::printAcronym() {
    cout << "Acronym: " << acronym << endl;
}

void Student::printBirthday() {
    cout << "Birthday: " << birthday << endl;
}

void Student::printPhoneNum() {
    cout << "Phone number: " << phone_num << endl;
}

void Student::printCity() {
    cout << "City: " << city << endl;
}

void Student::printCountry() {
    cout << "Country: " << country << endl;
}

void Student::printSchool() {
    cout << "School: " << school << endl;
}

void Student::printGroupNum() {
    cout << "Group number: " << group_num << endl;
}


void Student::printStudent() {
    cout << "Name: " << name << '\n';
    cout << "Surname: " << surname << '\n';
    cout << "Acronym: " << acronym << '\n';
    cout << "Birthday: " << birthday << '\n';
    cout << "Phone number: " << phone_num << '\n';
    cout << "City: " << city << '\n';
    cout << "Country: " << country << '\n';
    cout << "School: " << school << '\n';
    cout << "Group number: " << group_num << '\n';
}
