#include <bits/stdc++.h>
#define be(v) (v).begin(),(v).end()
#define pb(q) push_back(q)
typedef long long ll;
using namespace std;
const ll mod=1000000007, INF=(1LL<<60);
#define doublecout(a) cout<<fixed<<setprecision(10)<<a<<endl;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    ll t, n, d;
    string s;
    cin >> t;
    vector<ll> ans;
    while(t--){
    	cin >> n;
    	vector<ll> a(n);
    	for(int i=0;i<n;i++) cin >> a[i];
    	cin >> s;
    	int ok = 0;
    	vector<ll> dp(61, 0);
    	for(int i=n-1;i>=0;i--){
    		if(s[i] == '1'){
                d = INF;
    			for(int j=60;j>=0;j--, d /= 2LL){
    				if(a[i] & d) a[i] ^= dp[j];
    			}
    			if(a[i]) ok = 1;
    		}else{
                d = INF;
    			for(int j=60;j>=0;j--, d /= 2LL){
    				if(a[i] & d) {
    					if(dp[j] & d){
    						a[i] ^= dp[j];
    					}else{
    						dp[j] = a[i];
    						j = -1;
    					}
    				}
    			}
    		}
    	}
    	ans.pb(ok);
    }
    for(auto& i: ans ){
    	cout << i << endl;
    }
    return 0;
}
