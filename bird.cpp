//
// Created by Alec on 2019-10-11.
//

#include <iostream>
#include "bird.hpp"

using namespace std;
bird::bird():animal() {
    cout << "bird: " << ID << " Default constructor" << endl;
}

bird::bird(int age, double x, double y, double z):animal(age, x, y) {
    this->z = z;
    cout << "bird: " << ID << " Parameter constructor"<< endl;
}

void bird::move(double x, double y, double z) {
    animal::move(x, y);
    this->z = z;
    cout << "bird: " << ID << " Moved to x: " << x << " and y: " << y << " and z: " << z << endl;

}

bird::bird(const bird &b) {
    age = b.age;
    ID = counter++;
    alive = b.alive;
    x = b.x;
    y = b.y;
    z = b.z;
    cout << "bird: " << ID << " Copy constructor"<< endl;
}

bird::~bird() {
    cout << "bird: " << ID << "is being destroyed" << endl;
}

void bird::sleep() {
    cout << "bird: " << ID << " is sleeping" << endl;
}

void bird::eat() {
    cout << "bird: " << ID << " is eating"<< endl;
}

std::ostream & operator<<(std::ostream &os, const bird &b){
    os << "bird id: " << b.ID << endl;
    os << " age: " << b.age << endl;
    os << " alive: " << boolalpha << b.alive << endl;
    os << " x: " << b.x << endl;
    os << " y: " << b.y << endl;
    os << " z: " << b.z << endl;
    return os;
}

double bird::getX() const {
    return animal::getX();
}

double bird::getY() const {
    return animal::getY();
}

double bird::getZ() const {
    return animal::getZ();
}
