#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

ll n, m;
ll h[10010];
ll sh[10010];
ll w[15010];
ll sw[15010];

int main(){
    
    while(cin >> n >> m, n){
        sh[0] = sw[0] = 0;
        for(ll i = 0; i < n; i++){
            cin >> h[i];
            sh[i+1] = sh[i] + h[i];
        }
        for(ll i = 0; i < m; i++){
            cin >> w[i];
            sw[i+1] = sw[i] + w[i];
        }
        
        vector<ll> u;
        vector<ll> v;
        
        for(ll i = 0; i < n+1; i++){
            for(ll j = i+1; j < n+1; j++){
                u.push_back(sh[j] - sh[i]);
            }
        }
        
        for(ll i = 0; i < m+1; i++){
            for(ll j = i+1; j < m+1; j++){
                v.push_back(sw[j] - sw[i]);
            }
        }
        
        sort(u.begin(), u.end());
        sort(v.begin(), v.end());
        /*
        for(ll i = 0; i < u.size(); i++) cout << u[i] << " ";
        cout << endl;
        for(ll i = 0; i < v.size(); i++) cout << v[i] << " ";
        cout << endl;
	*/
        int cnt = 0;
        for(ll i = 0; i < u.size(); i++){
            //cout << u[i] << endl;
            cnt += upper_bound(v.begin(), v.end(), u[i]) - lower_bound(v.begin(), v.end(), u[i]);
        }
        cout << cnt << endl;
    }
}