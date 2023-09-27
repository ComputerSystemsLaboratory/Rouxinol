#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
const int mod = 1e9+7;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
int main(){
    cout << fixed << setprecision(10);
    while(1){
        int m,n_min,n_max;
        cin >> m >> n_min >> n_max;
        if(m == 0 && n_min == 0 && n_max == 0) break;
        vector<int> v(m);
        rep(i,m){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int ans;
        int now = 0;
        for(int i =  n_min; i <= n_max;i++){
            if( now <= abs(v[m - i] - v[m - i -1])){
                now = abs(v[m - i] - v[m - i -1]);
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
