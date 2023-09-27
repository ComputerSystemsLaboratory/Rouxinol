#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m,n) {
        vi hc,tc;
        int tmp;
        int tsum = 0,hsum = 0;
        rep(i,n){
            cin >> tmp;
            tc.pb(tmp);
            tsum += tmp;
        }
        rep(i,m){
            cin >> tmp;
            hc.pb(tmp);
            hsum += tmp;
        }
        int dis = tsum - hsum;
        if(dis % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        dis /= 2;
        int msum = 1000000,nt,nh;
        rep(i,n) rep(j,m){
            if(tc[i] - hc[j] == dis && msum > tc[i] + hc[j]) {
                msum = tc[i] + hc[j];
                nt = tc[i]; nh = hc[j];
            }
        }

        if(msum == 1000000) cout << -1 << endl;
        else cout << nt << " " << nh << endl;
    }
    return 0;

}

