#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int D, day = 0;
vi C, S[370], T, V, cost;

int calc(){
    int res = 0;
    rep(i, 26){
        res += C[i] * (day - cost[i]); 
    }
    return res;
}

void solve(){
    rep(i, D){
        day++;
        ans += S[i][T[i]-1];
        cost[T[i]-1] = day;
        ans -= calc();
        cout << ans << endl;
    }
}

int main(){
    cin >> D;
    C.resize(26);
    T.resize(D);
    cost.resize(26, 0);
    
    rep(i, 26){
        cin >> C[i];
    }   

    rep(i, D){
        S[i].resize(26);
        rep(j, 26) cin >> S[i][j];
    }

    rep(i, D) cin >> T[i];

    solve();
}
