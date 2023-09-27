#include <bits/stdc++.h>
#define INF (1e9 + 7)
#define rep(i, N) for(ll i = 0; i < N; i++)
#define rep2(i, j, k) for(ll i = j; i < k; i++)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
using namespace std;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vs = vector<string>;
using vvs = vector<vector<string>>;

void solve(){
    
    ll N, res;
    cin >> N;
    vl v(N + 100);
    rep2(x, 1, 110){
        rep2(y, 1, 110){
            rep2(z, 1, 110){
                res = pow(x, 2) + pow(y, 2) + pow(z, 2) + x * y + y * z + z * x;
                if(res <= N + 50){
                    v[res] += 1;
                }
            }
        }
    }
    
    rep2(i, 1, N + 1){
        cout << v[i] << endl;
    }

}

int main(){

    solve();    
    
	return 0;
	
}