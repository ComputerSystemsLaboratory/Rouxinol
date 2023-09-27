#include<iostream>

using namespace std;

int main() {
    while(1) {
        int x, y, s;

        cin >> x >> y >> s;

        if (x == 0 && y == 0 && s == 0) break;

        int ans = 0;
        for (int i = 1; i < s; ++i) {
            for (int j = 1; j < s; ++j) {
                if (i * (100 + x) / 100 + j * (100 + x) / 100 != s) continue;
                int price = i * (100 + y) / 100 + j * (100 + y) / 100;
                if (ans < price) ans = price;
            }
        }

        cout << ans << endl;
    }
}