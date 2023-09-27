#include <iostream>
using namespace std;

const int millennium = 196470;

int yearToDays(int y) {
    return 590 * ((int)(y-1)/3) + 195 * ((y-1)%3);
}

int monthToDays(int y, int m) {
    if (y % 3 == 0) {
        return 20 * (m-1);
    } else {
        return 39 * ((int)(m-1)/2) + 20 * ((m-1)%2);
    }
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        int y, m, d;
        cin >> y >> m >> d;
        d += yearToDays(y) + monthToDays(y, m);
        cout << millennium - d + 1 << endl;
    }
}