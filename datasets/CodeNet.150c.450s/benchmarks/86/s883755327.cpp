#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i < (int)(b);++i)


int main() {
    int N,M,P;
    while (true) {
        cin >> N >> M >> P;
        vector<int> X(N);
        if ( N == 0 && M ==  0 && P == 0) return 0;
        int s = 0;
        rep(i,N) {
            cin >> X[i];
            s += X[i];
        }
        if (X[M-1] == 0) cout << 0 << endl;
        else cout << (100 * (s) * (100 - P) / 100) / X[M-1] << endl;
        
    }
}

