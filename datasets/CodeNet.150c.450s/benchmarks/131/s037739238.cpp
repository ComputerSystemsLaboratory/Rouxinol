#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define pb push_back

void solve(string s, int l) {
    vector<string> v;
    for(int i=0; ; i++) {
        int n = s.size();
        string a = "";
        rep(i,l-n) a += "0";
        a += s;
        string tmp = a, down, up;
        sort(ALL(tmp));
        down = tmp;
        sort(RALL(tmp));
        up = tmp;
        s = to_string(stoi(up) - stoi(down));

        rep(j,SZ(v)) {
            if(a == v[j]) {
                printf("%d %d %d\n", j, stoi(a), i-j);
                return ;
            }
        }
        v.pb(a);
    }
    return ;
}

int main() {
    string s;
    int l;
    while(cin>>s>>l, l) solve(s,l);
    return 0;
}