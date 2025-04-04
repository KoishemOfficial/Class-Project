#include "Table.h"
#include <iostream>

using namespace std;

void Table::printData() {
    cout << width << ' ' << length << ' ' << height;
}

int Table::getWidth() {
    return width;
}

void Table::setWidth(int val) {
    width = val;
}

Table::Table() {
    width = 0, length = 0, height = 0;
}