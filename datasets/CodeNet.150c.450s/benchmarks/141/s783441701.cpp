#include <iostream>
using namespace std;

class Point {
public:
    double x, y;
};

double dotProduct(Point p1, Point p2) {
    return p1.x * p2.y - p1.y * p2.x;
}

int main () {
    double x[4], y[4];
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]) {
        double dp[3];
        for (int i = 0; i < 3; i++) {
            Point p[2];
            p[0].x = x[(i+1) % 3] - x[i];
            p[0].y = y[(i+1) % 3] - y[i];
            p[1].x = x[3] - x[i];
            p[1].y = y[3] - y[i];
            dp[i] = dotProduct(p[0], p[1]);
        }
        if ((dp[0] > 0 && dp[1] > 0 && dp[2] > 0)
            || (dp[0] < 0 && dp[1] < 0 && dp[2] < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}