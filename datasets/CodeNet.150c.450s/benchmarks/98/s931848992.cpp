#include <iostream>
#include <vector>

using namespace std;


void solve(vector<int> &S1, vector<int> &S2) {
    int N = S1.size(), M = S2.size();
    int sum1 = 0, sum2 = 0;
    int sumcard = 1 << 30, ans1, ans2;
    for(int i = 0; i < N; i++) sum1 += S1[i];
    for(int i = 0; i < M; i++) sum2 += S2[i];
    int diff = sum1 - sum2;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if (2 * (S1[i] - S2[j]) == diff) {
                if (sumcard > S1[i] + S2[j]) {
                    sumcard = S1[i] + S2[j];
                    ans1 = S1[i];
                    ans2 = S2[j];
                }
            }
        }
    }
    if (sumcard == 1 << 30) {
        cout << -1 << endl;
    } else {
        cout << ans1 << " " << ans2 << endl;
    }
}

int main() {
    int N, M;
    while(cin >> N >> M, N) {
        vector<int> S1(N), S2(M);
        for(int i = 0; i < N; i++) cin >> S1[i];
        for(int i = 0; i < M; i++) cin >> S2[i];
        solve(S1, S2);
    }
    return 0;
}
