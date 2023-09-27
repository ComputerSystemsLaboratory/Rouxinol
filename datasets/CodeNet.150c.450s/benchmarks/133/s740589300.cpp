#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int D;
vector<int> c(26+1);
vector<vector<int>> s;

int compute_score(vector<int> t) {
    vector<vector<int>> last(D+1,vector<int>(26+1,0));
    int ans = 0;
    for(int d = 1; d <= D; d++) {
        last[d][t[d]] = d;
        ans += s[d][t[d]];
        for(int i = 1; i <= 26; i++) {
            if(i == t[d]) continue;
            last[d][i] = last[d-1][i];
            ans -= c[i]*(d-last[d][i]);
        }
        cout << ans << endl;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin >> D;
    s.assign(D+1,vector<int>(26+1,0));
    for(int i = 1; i <= 26; i++) cin >> c[i];    
    for(int d = 1; d <= D; d++) for(int i = 1; i <= 26; i++) cin >> s[d][i];
    vector<int> t(D+1);
    for(int d = 1; d <= D; d++) cin >> t[d];
    compute_score(t);
}
