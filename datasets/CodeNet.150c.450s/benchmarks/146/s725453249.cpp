#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-10;

int main() {
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> n;
    while(n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        cout << (abs((x2-x1)*(y4-y3) - (x4-x3)*(y2-y1)) < eps ? "YES" : "NO") << endl;
    }
    return 0;
}
