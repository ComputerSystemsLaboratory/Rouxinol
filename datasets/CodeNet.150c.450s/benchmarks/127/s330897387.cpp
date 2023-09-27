#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define SZ(x) (int)(x).size()

void solve(string s) {
    int n = s.size();
    set<string> S;
    for(int len=1; len<n; len++) {
        string s1 = s.substr(0,len);
        string s2 = s.substr(len, n-len);
        string t1="", t2="";
        for(int i=SZ(s1)-1; i>=0; i--) t1+=s1[i];
        for(int i=SZ(s2)-1; i>=0; i--) t2+=s2[i];
        S.insert(s1+s2);
        S.insert(s1+t2);
        S.insert(t1+s2);
        S.insert(t1+t2);
        S.insert(s2+s1);
        S.insert(s2+t1);
        S.insert(t2+s1);
        S.insert(t2+t1);
    }
    cout << S.size() << "\n";
}

int main() {
    int m; cin>>m;
    rep(i,m) {
        string s; cin>>s;
        solve(s);
    }
    return 0;
}