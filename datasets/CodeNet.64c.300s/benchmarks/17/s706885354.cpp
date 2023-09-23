#include <algorithm>
#include <iostream>
using namespace std;

int f(int x, int p) {
    return x * (p + 100) / 100;
}

int main() {
    int x, y, s;
    while (cin >> x >> y >> s && x) {
        int ans = -1;
        for (int i = 1; i <= s; i++) {
            for (int j = 1; j <= s; j++) {
                int a1 = f(i, x);
                int b1 = f(j, x);
                int a2 = f(i, y);
                int b2 = f(j, y);
                if (a1 + b1 == s) {
                    ans = max(ans, a2 + b2);
                }
            }
        }
        cout << ans << endl;
    }
}