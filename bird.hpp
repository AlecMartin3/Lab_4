//
// Created by Alec on 2019-10-11.
//

#ifndef LAB_4_BIRD_HPP
#define LAB_4_BIRD_HPP


#include "animal.hpp"

class bird: public animal {

public:
    bird();
    bird(int age, double x, double y, double z);
    void move(double x, double y, double z);
    bird(const bird&);
    virtual ~bird();
    void sleep() override;
    void eat() override;
    friend std::ostream & operator<<(std::ostream &os, const bird &b);
    double getX() const override;
    double getY() const override;
    double getZ() const override;

};


#endif //LAB_4_BIRD_HPP
