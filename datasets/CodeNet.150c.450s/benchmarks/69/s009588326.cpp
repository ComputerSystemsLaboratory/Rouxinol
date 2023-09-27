//
// Created by yijiezhu on 12/20/16.
//

#include <bitset>
#include <iostream>
using namespace std;

int n, ball[10];

bool valid(int iter) {
    int left = 0, right = 0;
    auto bs = bitset<10>(iter);
    for (int i = 0; i < 10; i++) {
        if (bs[i]) {
            if (ball[i] < left) return false;
            left = ball[i];
        } else {
            if (ball[i] < right) return false;
            right = ball[i];
        }
    }
    return true;
}

int main() {
    cin >> n;
    while (n-- > 0) {
        for (int i = 0; i < 10; i++) {
            cin >> ball[i];
        }
        bool found = false;
        for (int iter = 0; iter < (1 << 10); iter++) {
            if (valid(iter)) {
                cout << "YES\n";
                found = true;
                break;
            }
        }
        if (!found) cout << "NO\n";
    }
}