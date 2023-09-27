#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long Long;

int N, M;
vector<int> H, W;
bool input() {
    scanf("%d %d\n", &N, &M);
    if (N == 0 && M == 0) return false;
    H.clear(); H.resize(N);
    W.clear(); W.resize(M);
    for (int i = 0; i < N; i++) {
        scanf("%d\n", &H[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d\n", &W[i]);
    }
    return true;
}

void solve() {
    vector<int> sH(N + 1, 0);
    for (int i = 0; i < N; i++) {
        sH[i + 1] = sH[i] + H[i];
    }
    vector<int> sW(M + 1, 0);
    for (int i = 0; i < M; i++) {
        sW[i + 1] = sW[i] + W[i];
    }

    vector<int> hh;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j <= N; j++) {
            hh.push_back(sH[j] - sH[i]);
        }
    }
    sort(hh.begin(), hh.end());
    Long ans = 0;
    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j <= M; j++) {
            int w = sW[j] - sW[i];
            ans += Long(upper_bound(hh.begin(), hh.end(), w) - lower_bound(hh.begin(), hh.end(), w));
        }
    }
    printf("%lld\n", ans);
}

int main() {
    while (input()) solve();
    return 0;
}