#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

#define GET_ARG(a,b,c,F,...) F
#define REP3(i,s,e) for (i = s; i <= e; i++)
#define REP2(i,n) REP3 (i,0,(int)(n)-1)
#define REP(...) GET_ARG (__VA_ARGS__,REP3,REP2) (__VA_ARGS__)
#define RREP3(i,s,e) for (i = s; i >= e; i--)
#define RREP2(i,n) RREP3 (i,(int)(n)-1,0)
#define RREP(...) GET_ARG (__VA_ARGS__,RREP3,RREP2) (__VA_ARGS__)
#define DEBUG(x) cerr << #x ": " << x << endl

int main(void) {
    int a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        double det = a * e - b * d;
        int x = e * c - b * f;
        int y = a * f - d * c;
        cout << fixed << setprecision(3);
        if (x == 0) cout << (double) 0 << " ";
        else cout << x / det << " ";
        cout << fixed << setprecision(3);
        if (y == 0) cout << (double) 0 << endl;
        else cout << y / det << endl;
    }
    return 0;
}