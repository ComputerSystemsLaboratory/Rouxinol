#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define itrep(it, a) for(it = (a).begin(); it != (a).end(); it++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

int dp1[2000050];
int dp2[2000050];

void solve(){
    vector<int> va;
    vector<int> vb;
    for(int i = 1; i * (i + 1) * (i + 2) / 6 <= 1000000; i++){
        int a = i * (i + 1) * (i + 2) / 6;
        va.push_back(a);
        if(a % 2 == 1) vb.push_back(a);
    }
    rep(i,1000005){
        dp1[i] = INF;
        dp2[i] = INF;
    }
    dp1[0] = dp2[0] = 0;

    rep(i,va.size()){
        rep(j, 1000000){
            if(dp1[j] != INF){
                dp1[j + va[i]] = min(dp1[j + va[i]], dp1[j] + 1);
            }
        }
    }
    rep(i,vb.size()){
        rep(j, 1000000){
            if(dp2[j] != INF){
                dp2[j + vb[i]] = min(dp2[j + vb[i]], dp2[j] + 1);
            }
        }
    }
}

int main(){
    int n;
    solve();
    while(cin >> n, n){
        cout << dp1[n] << ' ' << dp2[n] << endl;
    }
}