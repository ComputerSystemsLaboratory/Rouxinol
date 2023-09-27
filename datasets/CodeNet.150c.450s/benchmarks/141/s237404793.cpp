#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

bool sameside(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) {
    if (ax == bx) {
        if ( (cx - ax) * (dx - ax) > 0 ) return true;
        else    return false;
    } else {
        double slope = (by - ay) / (bx - ax);
        double r = ay - slope * ax;
        if ( (cy - slope * cx - r) * (dy - slope * dx - r) > 0 )    return true;
        else    return false;
    }

}

int main() {

    double a, b, c, d, e, f, g, h;
    while( cin >> a >> b >> c >> d >> e >> f >> g >> h) {
        if (sameside(a, b, c, d, e, f, g, h) && sameside(c, d, e, f, a, b, g, h) && sameside(e, f, a, b, c, d, g, h) ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}