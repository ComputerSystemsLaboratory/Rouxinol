#include<iostream>

using namespace std;

int n;

int days(int y, int m, int d) {
    // day
    int days = d;
    
    // month
    if (y % 3 == 0) {
        d += (m - 1) * 20;
    } else {
        d += 20 * (m / 2) + 19 * ((m - 1) / 2);
    }

    // year
    int uruu = (y - 1) / 3;
    d += uruu * 200 + (y - 1 - uruu) * 195;

    return d;
}

int main() {
    cin >> n;
    int mille = days(1000, 1, 1);
    for (int i = 0; i < n; ++i) {
        int y, m, d;
        cin >> y >> m >> d;
        cout << mille - days(y, m, d) << endl;
    }
}