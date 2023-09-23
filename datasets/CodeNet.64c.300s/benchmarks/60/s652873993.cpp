#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF (1<<30)
#define INFLL (1ll<<60)
typedef pair<int, int> P;
typedef pair<ll, P> E;
#define MOD (1000000007ll)
#define l_ength size
#define PI 3.14159265358979
 
void mul_mod(ll& a, ll b){
    a *= b;
    a %= MOD;
}
 
void add_mod(ll& a, ll b){
    b += MOD;
    a += b;
    a %= MOD;
}

int main(void){
    int a,b,n,x,y,i,j;
    ll dp[20][20];
    bool cst[20][20];
    cin >> a >> b;
    while(a || b){
        fill(cst[0],cst[20],false);
        cin >> n;
        for(i=0; i<n; ++i){
            cin >> x >> y;
            cst[x][y] = true;
        }
        for(i=0; i<=a; ++i){
            for(j=0; j<=b; ++j){
                if(cst[i][j] || !(i && j)){
                    dp[i][j] = 0ll;
                }else if(i==1 && j==1){
                    dp[i][j] = 1ll;
                }else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        cout << dp[a][b] << endl;
        cin >> a >> b;
    }
    return 0;
}
