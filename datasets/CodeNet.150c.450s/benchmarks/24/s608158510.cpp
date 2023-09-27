#include "bits/stdc++.h"

using namespace std;
#define rep(i, j) for(int i = 0; i < (j); i++)

int main() {
    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0) break;
        vector<pair<int, int>> PD(N);        
        rep(i, N) cin >> PD[i].second >> PD[i].first;
        sort(begin(PD), end(PD));
        reverse(begin(PD), end(PD));
        long long ans = 0;
        rep(i, N) {
            int p = PD[i].first, d = PD[i].second;
            int m = min(M, d);
            d -= m;
            M -= m;
            ans += d * p;
        }
        cout << ans << endl;
    }
}