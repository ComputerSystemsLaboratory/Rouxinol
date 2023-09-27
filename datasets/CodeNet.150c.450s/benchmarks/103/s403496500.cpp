#include <iostream>
using namespace std;

int main() {
    int n, s;
    while (cin >> n >> s, n || s) {
        int cnt = 0;
        int cmb = (1 << n) - 1;
        while (cmb < 1 << 10) {
            int sum = 0;
            for (int i=0; i<=9; ++i) {
                if ((cmb >> i) & 1) {
                    sum += i;
                }
            }
            if (sum == s) {
                cnt ++;
            }
            int x = cmb & -cmb, y = cmb + x;
            cmb = ((cmb & ~y) / x >> 1) | y;
        }
        cout << cnt << endl;
    }
    return 0;
}