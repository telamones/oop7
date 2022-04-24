#include "circle.h"

int main() {
    double x1,y1,r1;
    cout << "enter centre and radius of circle #1:";
    cin >> x1 >> y1 >> r1;

    Circle a(x1, y1, r1);
    Circle b(a);
}
