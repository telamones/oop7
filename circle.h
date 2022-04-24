#ifndef OOP7_CIRCLE_H
#define OOP7_CIRCLE_H

#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    double x;
    double y;
    double r;

public:
    Circle() {
        x=y=r=0;
    };
    Circle(double xx) {
        x=xx;
        y=r=0;
    };
    Circle(double xx, double yy) {
        x=xx;
        y=yy;
        r=0;
    };
    Circle(double xx, double yy, double rr) {
        x=xx;
        y=yy;
        r=rr;
    };

    Circle (const Circle& obj) {
        this->x = obj.x;
        this->y = obj.y;
        this->r = obj.r;
    };

    ~Circle() {
    };
};

#endif //OOP7_CIRCLE_H