#include <bits/stdc++.h>

using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
long long dp[100100];

int main() {
    int N; cin >> N;
    vector<int> R(N);
    for(int i = 0; i < N; i++) {
        cin >> R[i];
    }

    int minv = R[0];
    int maxv = R[1] - R[0];
    for(int i = 1; i < N; i++) {
        maxv = max(maxv, R[i]-minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;

    return 0;
}
