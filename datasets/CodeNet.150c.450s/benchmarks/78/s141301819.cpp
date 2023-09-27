#include <cstdio>
#include <algorithm>
#include <iterator>

using namespace std;

int N;

int L[200];
int M[200];
int M_max;
int dp[1000001];

void init() {
    for (int i = 1; i <= 200; i++) {
        L[i - 1] = (i * (i + 1) * (i + 2)) / 6;
    }

    int j = 0;
    for (int i = 0; i < 200 && L[i] <= 1000000; i++) {
        if (L[i] % 2 == 1) {
            M[j++] = L[i];
        }
    }
    M_max = j;

    for (int i = 0; i <= 1000000; i++) {
        dp[i] = 10000000;
    }
    dp[0] = 0;
    for (int i = 1; i <= 1000000; i++) {
        for (int j = 0; j < M_max && M[j] <= i; j++) {
            dp[i] = min(dp[i], dp[i - M[j]] + 1);
        }
    }
}

int f(int nth, int s) {
    int r = N - s;
    int start = distance(L, upper_bound(L, L + 200, r)) - 1;

    int m = 100;
    for (int i = start; i >= 0 && r <= (5 - nth) * L[i]; i--) {
        if (r == L[i]) {
            return nth + 1;
        }

        m = min(m, f(nth + 1, s + L[i]));
    }

    return m;
}

void solve() {
    printf("%d %d\n", f(0, 0), dp[N]);
}

int main() {
    init();
    while (true) {
        scanf("%d", &N);
        if (!N) {
            break;
        }
        solve();
    }
    return 0;
}