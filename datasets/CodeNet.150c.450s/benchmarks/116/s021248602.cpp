#include <iostream>
using namespace std;

int sum(int S[], int begin, int end) {
    int ans = 0;
    for (int i = begin; i < end; ++i) {
        ans += S[i];
    }
    return ans;
}

int main() {

    int n, k;
    for (;;) {
        cin >> n >> k;
        if (n == 0 && k == 0) break;

        int S[100000] = {0};
        for (int i = 0; i < n; ++i) {
            cin >> S[i];
        }

        int dummy = sum(S, 0, k);
        int m = n - k + 1;
        int tmp = 0;
        int ans = dummy;
        for (int i = 1; i < m; ++i) {
            int tmp = dummy - S[i - 1] + S[i + k - 1];
            dummy = tmp;
            if (ans < tmp) ans = tmp;
        }

        cout << ans << endl;
    }

    return 0;
}