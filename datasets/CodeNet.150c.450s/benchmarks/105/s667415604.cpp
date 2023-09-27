#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define Rep(i,n) for(int i=1;i<=(n);++i)
using LL = long long;
using ULL = unsigned long long;

const LL INF = 1e18;

LL b[60];

bool f(LL x) {
    rep(i, 60) if((1ll << i) & x) {
        if(!b[i]) {
            b[i] = x;
            return true;
        }
        x ^= b[i];
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        memset(b, 0, sizeof b);
        int n;
        cin >> n;
        vector<LL> a(n);
        for(LL &x: a) cin >> x;
        string s;
        cin >> s;
        for(int i = n-1; i >= 0; --i) {
            if(f(a[i]) && s[i] == '1') {
                puts("1");
                goto _;
            }
        }
        puts("0");
        _: ;
    }
	return 0;
}
