//
// Created by Alec on 2019-10-11.
//

#ifndef LAB_4_ANIMAL_HPP
#define LAB_4_ANIMAL_HPP
using namespace std;
#include <ostream>
class animal {
public:

    animal();
    animal(int age, double x, double y);
    virtual void move(double x, double y);
    animal(const animal& ani);
    virtual ~animal();
    virtual void sleep();
    virtual void eat();
    void setAlive(bool alive);
    friend std::ostream& operator<<(std::ostream& os, const animal& ani);
    virtual double getX() const;
    virtual double getY() const;
    virtual double getZ() const;
    static long counter;



protected:
    int age;
    long ID;
    bool alive;
    double x, y, z;
};


#endif //LAB_4_ANIMAL_HPP
