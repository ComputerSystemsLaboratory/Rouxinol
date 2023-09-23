#include <iostream>
using namespace std;

int prime[1000005], a, d, n, cnt;

void solve() {
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= 1000000; ++i) {
        if (prime[i] == 0) {
            for (int j = 2; i * j <= 1000000; ++j) {
                prime[i * j] = 1;
            }
        }
    }
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();

    while (cin >> a >> d >> n, a | d | n) {
        cnt = 0;
        for (int i = 0; ; ++i) {
            if (prime[a + i * d] == 0) cnt++;
            if (cnt == n) {
                cnt = i;
                break;
            }
        }
        cout << a + cnt * d << endl;
    }

    return 0;
}