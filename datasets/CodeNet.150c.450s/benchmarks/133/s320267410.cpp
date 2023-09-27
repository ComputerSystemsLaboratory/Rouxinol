#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using P = pair<ll,ll>;
const ll mod = 1e9+7;
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define REPS(i,n) for(ll (i)=1;(i)<=(n);(i)++)
#define RREP(i,n) for(ll (i)=(n-1);(i)>=0;(i)--)
#define RREPS(i,n) for(ll (i)=(n);(i)>0;(i)--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end());

template<class T> inline void chmin(T& a, T b){
    if (a > b){
        a = b;
    }
}

template<class T> inline void chmax(T& a, T b){
    if (a < b){
        a = b;
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(12);
    ll D;
    cin >> D;
    vector<ll> C(26);
    vector<ll> T(D);
    vector<ll> last(26);
    REP(i,26)cin >> C[i];
    vector<vector<ll>> S(D,vector<ll>(26));
    REP(i,D){
        REP(l,26)cin >> S[i][l];
    }
    REP(i,D)cin >> T[i];
    REP(i,D)T[i]--;
    ll score = 0;
    REP(i,D){
        last[T[i]] = i+1;
        score += S[i][T[i]];
        REP(l,26){
            score -= C[l] * (i+1 -last[l]);
        }
        cout << score << "\n";
    }
}