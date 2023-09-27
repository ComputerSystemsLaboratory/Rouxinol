#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    int n;
    cin >> n;

    double a, b, c, d, e, f, g, h;
    while(cin >> a >> b >> c >> d >> e >> f >> g >> h) {
        double vx = c - a;
        double vy = d - b;
        double wx = g - e;
        double wy = h - f;

        if(vx * wy - vy * wx == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
     
    return 0;
}