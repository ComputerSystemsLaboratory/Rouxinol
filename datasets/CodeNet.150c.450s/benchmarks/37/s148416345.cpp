#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

typedef pair<double, double> XY;

XY solve(double a, double b, double c, double d, double e, double f) {
    double x, y;
    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);
    return make_pair(x,y);
}

int main() {
    double a,b,c,d,e,f;
    while(cin >> a >> b >> c >> d >> e >> f) {
        double x, y;
        XY xy = solve(a,b,c,d,e,f);
        x = xy.first;
        y = xy.second;
        printf("%.3f %.3f\n", round(1000 * x)/1000. + 0.00001, round(1000 * y)/1000. + 0.00001);
    }
    return 0;
}