#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

#define rep(i,N) for(int i=0;i<(int)(N);++i)
#define rrep(i,N) for(int i=(int)(N)-1;i>=0;--i)
#define debug(x) cout<<#x<<"="<<x<<endl;
constexpr ll MOD=1000000007;
constexpr ll INF=1LL<<60;
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> void fail(T v){cout << v << endl;exit(0);}
//template end

void solve(){
    int N,M;
    while((cin>>N>>M,N|M)){
        vector<int> H(N),W(M);
        rep(i,N)cin>>H[i];
        rep(i,M)cin>>W[i];
        vector<int> ach(N+1),acw(M+1);
        rep(i,N)ach[i+1]=ach[i]+H[i];
        rep(i,M)acw[i+1]=acw[i]+W[i];
        vector<int> ct(2020202);
        rep(i,M+1)rep(j,i)ct[acw[i]-acw[j]]++;
        ll res=0;
        rep(i,N+1)rep(j,i)res+=ct[ach[i]-ach[j]];
        cout<<res<<endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    solve();
    return 0;
}
