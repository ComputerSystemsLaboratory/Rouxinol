#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define INF 1<<30
#define LINF 1LL<<60

/*
 <url:>
 ?????????============================================================
 
 =================================================================
 
 ?§£??¬=============================================================
 
 ================================================================
 */
int main(void) {
    cin.tie(0); ios::sync_with_stdio(false);
    ll n;
    ll G[10][10];
    bool used[10];
    while(cin >> n){
        if(n==0) break;
        for(int i = 0; i < 10;i++)for(int j = 0;j < 10;j++) G[i][j] = INF;
        for(int i = 0; i < 10;i++){
            used[i] = false;
            G[i][i] = 0;
        }
        for(int i = 0; i < n;i++){
            ll a,b,c; cin >> a >> b >> c;
            G[a][b] = min(G[a][b],c);
            G[b][a] = min(G[b][a],c);
            used[a] = used[b] = true;
        }
        for(int i = 0; i < 10;i++){
            for(int j = 0;j <10;j++){
                for(int k = 0;k < 10;k++){
                    G[j][k] = min(G[j][k],G[j][i]+G[i][k]);
                }
            }
        }
        ll id = -1,sum = INF;
        for(int i = 0; i < 10;i++){
            if(used[i] == false)continue;
            ll tmp = 0;
            for(int j = 0; j < 10;j++){
                if(i == j)continue;
                if(used[j] == false)continue;
                tmp += G[i][j];
            }
            if(tmp < sum){
                sum = tmp;
                id = i;
            }
        }
        cout << id << " " << sum << endl;
    }
    return 0;
}