#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	while(1){
		int n,k; cin >>n>>k;
		if(n==0&& k==0) break;
		vector<ll> a(n);
		cinf(n,a);
		vector<ll> s(n+1,0);
		for(int i=0;i<n;i++){
			s[i+1]=s[i]+a[i];
		}
		ll ans=-1e9;
		for(int i=0;i<=n-k;i++){
			ll sum=s[i+k]-s[i];
			ans=max(ans,sum);
		}
		cout << ans << endl;
	}
}
