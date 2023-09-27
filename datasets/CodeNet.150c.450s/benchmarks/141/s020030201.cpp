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

const double ERR = 1e-6;

typedef pair<double, double> XY;

double getlen(XY p, XY q) {
    return sqrt((p.first-q.first)*(p.first-q.first) + (p.second-q.second)*(p.second-q.second));
}

double area(XY p, XY q, XY r) {
    double pq, pr, qr;
    pq = getlen(p,q); pr = getlen(p,r); qr = getlen(q,r);
    return 0.5 * pq * pr * sin(acos((pq*pq + pr*pr - qr*qr)/2/pq/pr));
}

int main() {
    double x1,y1,x2,y2,x3,y3,xx,yy;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xx>>yy) {
        XY xy1, xy2, xy3, xyp;
        xy1 = make_pair(x1,y1);
        xy2 = make_pair(x2,y2);
        xy3 = make_pair(x3,y3);
        xyp = make_pair(xx,yy);
        if (abs(area(xy1,xy2,xy3) - (area(xy1,xy2,xyp) + area(xy2,xy3,xyp) + area(xy3,xy1,xyp))) < ERR) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}