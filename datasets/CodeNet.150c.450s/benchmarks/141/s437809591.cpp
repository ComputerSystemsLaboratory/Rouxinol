#include <iostream>
#include <math.h>
 
using namespace std;
 
typedef struct Point {
    double x;
    double y;
} POINT;
 
double area(Point l, Point m, Point n);
 
int main() {
    Point a, b, c, p;
    while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> p.x >> p.y) {
        double diff = area(a, b, c) - (area(a, b, p) + area(b, c, p) + area(c, a, p));
        if (fabs(diff) < 0.001) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        } 
    }
}
 
double area(Point l, Point m, Point n) {
    return fabs( (m.x - l.x) * (n.y - l.y)
            - (m.y - l.y) * (n.x - l.x)) * 0.5;
}