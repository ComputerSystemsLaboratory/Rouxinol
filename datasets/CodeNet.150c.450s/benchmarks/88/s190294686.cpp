#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    while (cin >> h >> w, h) {
        int ah = 150, aw = 150;
        for (int i = 1; i <= 150; i++) {
            for (int j = i + 1; j <= 150; j++) {
                if (i * i + j * j < h * h + w * w) continue;
                if (i * i + j * j == h * h + w * w && i <= h) continue;
                if (i * i + j * j < ah * ah + aw * aw) {
                    ah = i; aw = j;
                } else if (i < ah) {
                    ah = i; aw = j;
                }
            }
        }
        cout << ah << " " << aw << endl;
    }
}
