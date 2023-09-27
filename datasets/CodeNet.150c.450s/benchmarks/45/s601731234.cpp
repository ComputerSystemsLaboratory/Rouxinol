#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(int (i) = (s);(i) <= (e);(i)++)

int main() {
    i64 MOD = 1e9 + 7;
    i64 M,N;
    cin >> M >> N;
    i64 ans = 1;
    i64 now = M;
    while(N != 0){
        if(N & 1){
            ans = (ans * now) % MOD;
        }
        now = (now * now) % MOD;
        N >>= 1;
    }

    cout << ans << endl;
}

