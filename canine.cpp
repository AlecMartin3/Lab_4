//
// Created by Alec on 2019-10-11.
//

#include "canine.hpp"
#include <iostream>

using namespace std;
canine::canine():animal() {
    cout << "canine: " << ID << " Default constructor"<< endl;
}

canine::canine(int age, double x, double y) : animal(age, x, y) {
    cout << "canine: " << ID << " Parameter constructor"<< endl;
}

void canine::move(double x, double y) {
    animal::move(x, y);
    cout << "canine: " << ID << " Moved to x: " << x << " and y: " << y << endl;
}

canine::canine(const canine &c) {
    age = c.age;
    ID = counter++;
    alive = c.alive;
    x = c.x;
    y = c.y;
    cout << "canine: " << ID << " Copy constructor"<< endl;
}

canine::~canine() {
    cout << "canine: " << ID << " Destructor"<< endl;

}

void canine::sleep() {
    cout << "canine: " << ID << " is sleeping"<< endl;
}

void canine::eat() {
    cout << "canine: " << ID << " is eating"<< endl;
}

void canine::hunt(animal* a) {
    if(abs(a->getX()-x) <= 1 ) {
        if(abs(a->getY()-y) <= 1 ) {
            if(abs(a->getZ()-z) <= 1 ) {
                a->setAlive(false);
                cout << "canine " << ID << " succeeded"<< endl;
            }
            else {
                cout << "canine " << ID << " failed"<< endl;
            }
        }
        else {
            cout << "canine: " << ID << " failed"<< endl;
        }
    }
    else {
        cout << "canine: " << ID << " failed"<< endl;
    }

}

std::ostream & operator<<(std::ostream &os, const canine &c){
    os << "canine id: " << c.ID << endl;
    os << " age: " << c.age << endl;
    os << " alive: " << boolalpha << c.alive << endl;
    os << " x: " << c.x << endl;
    os << " y: " << c.y << endl;
    os << " z: " << c.z << endl;
    return os;
}

double canine::getX() const {
    return animal::getX();
}

double canine::getY() const {
    return animal::getY();
}

double canine::getZ() const {
    return animal::getZ();
}
