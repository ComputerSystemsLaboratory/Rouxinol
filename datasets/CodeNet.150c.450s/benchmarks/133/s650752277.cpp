#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define mod 1000000007
#define MOD 998244353
#define INF 40000000000000000
int dx8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy8[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dx4[4] = {-1, 0, 1, 0};
int dy4[4] = {0, -1, 0, 1};
template <class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
signed main() {
    int D;cin>>D;
    int C[26];rep(i,26)cin>>C[i];
    int S[D+1][26];
    rep(i,D){
        rep(j,26)cin>>S[i+1][j];
    }
    int t[D+1];
    rep(i,D){
        cin>>t[i+1];
        t[i+1]--;
    }
    int score=0;
    for(int i=1;i<=D;i++){
        score+=S[i][t[i]];
        rep(j,26){
            int now=0;
            for(int k=1;k<=i;k++){
                if(t[k]==j)chmax(now,k);
            }
            score-=C[j]*(i-now);
        }
        cout<<score<<endl;
    }
}

