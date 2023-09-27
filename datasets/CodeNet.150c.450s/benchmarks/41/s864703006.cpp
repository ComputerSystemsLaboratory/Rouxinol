#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
//約数列挙
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
vector<int> dx={1,0,-1,0};vector<int> dy={0,-1,0,1};

int n,m;
vector<vector<ll>> dp;
signed main () {
    scanf("%d %d",&n,&m);
    dp.assign(n,vector<ll>(n,INF));
    for(int i= 0;i<n;i++)dp[i][i] = 0;
    REP(i,m){
        ll a,b,c;scanf("%lld %lld %lld",&a,&b,&c);
        dp[a][b] = c;
    }
    REP(k,n){
        REP(i,n){
            REP(j,n){
                if(dp[i][k] != INF && dp[k][j] != INF){
                    dp[i][j]=min(dp[i][j], dp[i][k] + dp[k][j]);
                }
            }
        }
    }

    REP(i,n){
        if(dp[i][i] < 0 ){
            printf("NEGATIVE CYCLE\n");
            return 0; 
        }
    }
    REP(i,n){
        REP(j,n){
            if(dp[i][j]==INF){
                printf("INF");
            } else {
                printf("%lld",dp[i][j]);
            }
            if(j!=n-1){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
}
