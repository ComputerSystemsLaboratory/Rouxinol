#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(long long i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int D;
vector<int> c(26); 
vector<vector<int>> s(365, vector<int>(26));

vector<int> cal_score(vector<int> t){
    vector<int> res(D);
    int satis = 0;
    vector<int> last(26, 0);
    rep(d, D){
        satis += s[d][t[d] - 1];
        last[t[d] - 1] = d + 1;
        rep(i, 26){
            satis -= c[i] * (d - last[i] + 1);
        }
        res[d] = satis;
    }
    return res;
}


int main(){
    // input 
    cin >> D;
    rep(i, 26) cin >> c[i];
    rep(i, D){
        rep(j, 26){
            cin >> s[i][j];
        }
    }
    vector<int> t(D);
    rep(i, D) cin >> t[i];
    vector<int> res = cal_score(t);
    rep(i, D) cout << res[i] << endl;
    return 0;
}