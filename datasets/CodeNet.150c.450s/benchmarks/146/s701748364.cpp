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

bool para(XY p, XY q) {
    double k;
    if (p.first == 0 && q.first == 0) return true;
    if (p.first == 0 || q.first == 0) return false;
    else k = q.first / p.first;
    if ((abs(p.second * k - q.second) * 1000000000000) < 1) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        double ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
        XY AB = make_pair(ax-bx, ay-by);
        XY CD = make_pair(cx-dx, cy-dy);
        if (para(AB, CD)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}