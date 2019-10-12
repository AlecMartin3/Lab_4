//
// Created by Alec on 2019-10-11.
//

#ifndef LAB_4_CANINE_HPP
#define LAB_4_CANINE_HPP


#include "animal.hpp"
#include <iostream>
#include <ostream>

using namespace std;
class canine: public animal {

public:
    canine();
    canine(int age, double x, double y);
    void move(double x, double y) override;
    canine(const canine&);
    virtual ~canine();
    void sleep() override;
    void eat() override;
    void hunt(animal* a);
    friend std::ostream & operator<<(std::ostream &os, const canine &c);
    double getX() const override;
    double getY() const override;
    double getZ() const override;
};



#endif //LAB_4_CANINE_HPP
