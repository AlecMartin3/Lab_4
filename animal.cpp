//
// Created by Alec on 2019-10-11.
//
#include <iostream>
#include "animal.hpp"
using namespace std;
long animal::counter = 1;
animal::animal() {
    age = 0;
    ID = counter++;
    alive = true;
    x = 0;
    y = 0;
    z = 0;
    cout << "animal: " << ID << " Default constructor" << endl;
}
animal::animal(int age, double x, double y) {
    this->age = age;
    ID = counter++;
    alive = true;
    this->x = x;
    this->y = y;
    this->z = 0;

    cout << "animal: " << ID << " Parameter constructor" << endl;
}

void animal::move(double x, double y) {
    this->x = x;
    this->y = y;
    cout << "animal: " << ID << " Moved to x: " << x << " and y: " << y  << endl;
}

animal::animal(const animal& ani){
    age = ani.age;
    ID = counter++;
    alive = ani.alive;
    x = ani.x;
    y = ani.y;
    cout << "animal: " << ID << " Copy constructor" << endl;
}
//TODO:
animal::~animal(){
    cout << "animal:" << ID << " Destructor" << endl;
}

void animal::sleep(){
    cout << "Animal: " << ID << " is sleeping" << endl;
}
void animal::eat(){
    cout << "Animal: " << ID << " is eating" << endl;
}

void animal::setAlive(bool alive) {
    this->alive = alive;
}
ostream& operator<<(ostream& os, const animal& ani){
    os << "animal id: " << ani.ID << endl;
    os << " age: " << ani.age << endl;
    os << " alive: " << boolalpha << ani.alive << endl;
    os << " x: " << ani.x << endl;
    os << " y: " << ani.y << endl;
    os << " z: " << ani.z << endl;
    return os;
}
double animal::getX() const {
    return x;
}

double animal::getY() const {
    return y;
}

double animal::getZ() const {
    return z;
}
