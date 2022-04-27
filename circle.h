#ifndef OOP7_CIRCLE_H
#define OOP7_CIRCLE_H

#include <iostream>
#include <cmath>

using namespace std;

class Circle {
    double x;
    double y;
    double r;

public:
    Circle(double xx = 0, double yy = 0, double rr = 0) {
        x=xx;
        y=yy;
        r=rr;
        cout << this->x << this->y << this->r << endl;
    };

    Circle (const Circle& obj) {
        cout << this->x << this->y << this->r << endl;
        this->x = obj.x;
        this->y = obj.y;
        this->r = obj.r;
        cout << obj.x << obj.y << obj.r << endl;
    };

    ~Circle() {
        cout << this << " destr" << endl;
    };
};

#endif //OOP7_CIRCLE_H