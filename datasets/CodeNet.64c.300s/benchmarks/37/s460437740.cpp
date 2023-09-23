#include<iostream>

using namespace std;

int sum[1001];

int main() {
    sum[0] = 0;
    for (int i = 1; i <= 1000; ++i) {
        sum[i] = sum[i - 1] + i;
    }

    while (1) {
        int n;
        cin >> n;

        if (n == 0) break;

        int ans = 0;
        for (int i = 1; i <= 1000; ++i) {
            for (int j = i + 1; j < 1000; ++j) {
                if (sum[j] - sum[i - 1] == n) ans++;
            }
        }

        cout << ans << endl;
    }
}