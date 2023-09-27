#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    while(true){
        int ans = mod;
        int N; cin >> N;
        if(N == 0) break;
        vector<int> A(N);
        rep(i, N) cin >> A[i];
        sort(A.begin(), A.end());
        rep(i, N-1) ans = min(ans, A[i+1]-A[i]);
        cout << ans << endl;
    }
    return 0;
}
