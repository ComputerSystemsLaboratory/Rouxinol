#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int n;
double x1, x2, x3, x4, y1, y2, y3, y4, slope1, slope2;

double abs(double s) {
    return s < 0 ? -s : s;
}

int main(void) {
    cin >> n;
    while(n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        slope1 = (y1 - y2) / (x1 - x2);
        slope2 = (y3 - y4) / (x3 - x4);

        if(slope1 == slope2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}