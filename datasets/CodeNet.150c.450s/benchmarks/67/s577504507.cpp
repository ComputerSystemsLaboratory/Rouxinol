#include <bits/stdc++.h>

using namespace std;

int solve(int N) {
    int ans = 0;
    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int sum = 0;
            for (int k = 0; k < i; ++k) {
                sum += j + k;
            }
            if (sum == N) {
                ++ans;
            }
        }
    }
    return ans;
}

int main() {
    while (1) {
        int N; cin >> N;
        if (N == 0) {
            break;
        }
        cout << solve(N) << endl;
    }
}