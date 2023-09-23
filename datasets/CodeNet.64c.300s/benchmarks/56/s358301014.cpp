#include <bits/stdc++.h>
using namespace std;

int calc(int ymd[]) {
    const int MONTH = 10, BIG_DAY = 20, SMALL_DAY = 19;
    int nomalYear = (MONTH / 2 * BIG_DAY) + (MONTH / 2 * SMALL_DAY);
    int uruYear   = MONTH * BIG_DAY;
    int ret       = 0;

    ret += ((ymd[0] - 1) / 3) * uruYear;
    ret += ((ymd[0] - 1) / 3) * 2 * nomalYear;
    ret += ((ymd[0] - 1) % 3) * nomalYear;
    if (ymd[0] % 3) {
        ret += (ymd[1] - 1) / 2 * BIG_DAY + (ymd[1] - 1) / 2 * SMALL_DAY;
        ret += (ymd[1] - 1) % 2 * BIG_DAY;
        ret += ymd[2];
    } else {
        ret += (ymd[1] - 1) * BIG_DAY;
        ret += ymd[2];
    }
    return ret;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    int ymd[3];
    int millennium = 196471;
    cin >> n;
    for (int idxone = 0; idxone < n; ++idxone) {
        cin >> ymd[0] >> ymd[1] >> ymd[2];
        cout << millennium - calc(ymd) << endl;
    }
}
