#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

class Point{
public:
    double y, x;
    Point(double y0, double x0){
        y = y0;
        x = x0;
    }
    Point(){
        y = x = 0.0;
    }
    double cross(const Point& p) const{
        return x * p.y - y * p.x;
    }
    Point operator-(const Point& p) const{
        return Point(y - p.y, x - p.x);
    }
};

int main()
{
    for(;;){
        vector<Point> p(3);
        Point p1;
        for(int i=0; i<3; ++i){
            if(!(cin >> p[i].x >> p[i].y))
                return 0;
        }
        cin >> p1.x >> p1.y;

        bool plus = true;
        bool minus = true;
        for(int i=0; i<3; ++i){
            Point p2 = p[(i+1)%3] - p[i];
            Point p3 = p1 - p[i];
            if(p2.cross(p3) < 0)
                plus = false;
            else
                minus = false;
        }
        if(plus || minus)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}