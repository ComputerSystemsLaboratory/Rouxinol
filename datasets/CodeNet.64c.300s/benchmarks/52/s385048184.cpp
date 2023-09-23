#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n, s, sum, cnt;

    while (cin >> n >> s) {
        if (!n && !s) { break; }
        cnt = 0;
        for (int i = 0; i < (1 << 10); i++) {
            sum = 0;
            for (int j = 0; j < 10; j++) {
                if (i & (1 << j)) {
                    sum += a[j];
                }
            }
            if (sum == s && bitset<10>(i).count() == n) { cnt++; }
        }
        cout << cnt << endl;
    }
    return 0;
}