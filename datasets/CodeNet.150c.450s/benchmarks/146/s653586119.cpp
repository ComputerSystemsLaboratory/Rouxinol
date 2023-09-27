#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double slope1, slope2;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        slope1 = (y2 - y1) * (x4 - x3);
        slope2 = (y4 - y3) * (x2 - x1);
        
        if(abs(slope1 - slope2) < 0.0000000001) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
