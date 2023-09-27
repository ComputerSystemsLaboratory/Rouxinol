#include <bits/stdc++.h>
template<class T> inline bool chmin(T&a, T b){if(a > b){a = b; return true;}else{return false;}}
template<class T> inline bool chmax(T&a, T b){if(a < b){a = b; return true;}else{return false;}}
#define ll long long
#define double long double
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=1;i<=(n);i++)
#define mod (ll)(1e9+7)
#define inf (ll)(3e18+7)
#define pi (double) acos(-1.0)
#define P pair<int,int>
#define PiP pair<int,pair<int,int>>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
using namespace std;

int main() {
    int d;
    cin >> d;
    vector<int> c(26);
    rep(i, 26)cin >> c[i];
    vector<vector<int>> s(d, vector<int>(26));
    rep(i, d)rep(j, 26)cin >> s[i][j];
    //-----code------//
    vector<int> t(d);
    rep(i, d){cin >> t[i]; t[i]--;}
    int ans = 0;
    vector<int> last(26, 0);
    rep(i, d){
        ans += s[i][t[i]];
        int sum = 0;
        rep(j, 26){
            if(t[i] == j)last[j] = i+1;
            ans -= c[j] * ((i+1)-last[j]);
        }
        cout << ans << endl;
    }
}