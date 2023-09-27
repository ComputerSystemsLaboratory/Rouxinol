#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 1;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0) {
            sum += 200;
        } else {
            sum += 195;
        }
    }

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        int s = 0;
        for (int i = 1; i < x; i++) {
            if (i % 3 == 0) s += 200;
            else s += 195;
        }
        for (int i = 1; i < y; i++) {
            if (x % 3 && i % 2 == 0) s += 19;
            else s += 20;
        }

        s += z;

        cout << sum - s << endl;
    }

    return 0;
}

