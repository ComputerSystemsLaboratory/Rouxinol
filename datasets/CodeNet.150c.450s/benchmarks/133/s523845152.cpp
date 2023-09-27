#include <bits/stdc++.h>  
#define rep(i, n) for(int i=0; i<(int)(n); ++i)
#define cout(val) cout << (val) << endl
using namespace std;
typedef long long ll;

int main(){
    int d;
    cin >> d;
    vector<int> c(26);
    vector<vector<int>> s(d, vector<int>(26));
    vector<int> t(d);
    for(auto &&n : c) cin >> n;
    for(auto &&n1 : s) for(auto &&n2 : n1) cin >> n2;
    for(auto &&n : t){
        cin >> n;
        --n;
    }

    vector<int> l(26);

    int v = 0;

    rep(i, d){
        v += s[i][t[i]];
        l[t[i]] = -1;
        rep(j, 26) v -= c[j] * (++l[j]);
        cout(v);
    }
}
