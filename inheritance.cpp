//
// Created by Alec on 2019-10-11.
//
#include <iostream>
#include <ostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {
    animal* a = new animal(1, 2,3);
    animal* b = new bird(2, 4,3,100);
    animal* c = new canine(3, 5,6);
    cout  << endl;

    cout << *a << endl;
    cout << *dynamic_cast<bird*>(b) << endl;
    cout << *dynamic_cast<canine*>(c) << endl;
    cout << endl;

    a->sleep();
    b->sleep();
    c->sleep();
    cout << endl;

    a->eat();
    b->eat();
    c->eat();
    cout << endl;

    dynamic_cast<canine*>(c)->hunt(b);
    cout << endl;

    a->move(11, 11);
    dynamic_cast<bird*>(b)->move(10, 10, 1);
    dynamic_cast<canine*>(c)->move(10, 10);
    cout  << endl;

    cout << *a << endl;
    cout << *dynamic_cast<bird*>(b) << endl;
    cout << *dynamic_cast<canine*>(c) << endl;
    cout << "\n" << endl;

    dynamic_cast<canine*>(c)->hunt(b);
    cout << endl;

    cout << *a << endl;
    cout << *dynamic_cast<bird*>(b) << endl;
    cout << *dynamic_cast<canine*>(c) << endl;

    delete a;
    delete b;
    delete c;
    
    return 0;
}
