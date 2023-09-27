#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int64_t> A(N);
    for(auto &e : A) cin >> e;
    for(int i = 0; i < N - K; ++i) {
        cout << (A[i + K] > A[i] ? "Yes" : "No") << '\n';
    }
    return 0;
}
