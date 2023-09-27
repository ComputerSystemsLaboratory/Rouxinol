#include <iostream>
#include <cmath>
#define rep(i,a,n) for(int i=a; i<n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        double x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        
        double a1 = x2 - x1;
        double b1 = y2 - y1;
        double a2 = x4 - x3;
        double b2 = y4 - y3;
        
        if(abs(a1 * b2 - a2 * b1) < 1e-10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}