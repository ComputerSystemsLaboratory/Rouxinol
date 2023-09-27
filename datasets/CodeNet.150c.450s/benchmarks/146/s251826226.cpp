#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        vector<pair<double, double>> p(4);
        for (int i = 0; i < 4; i++) {
            double x, y; cin >> x >> y;
            p[i] = {x, y};
        }

        double l1_r = p[1].first - p[0].first;
        double l1_i = p[1].second - p[0].second;
        double l2_r = p[3].first - p[2].first;
        double l2_i = p[3].second - p[2].second;

        if (abs(l1_r * l2_i - l1_i * l2_r) < 1e-10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

