#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define puts(i) cout<<i<<endl
#define pi 3.14159265358979323846264338
#define pb push_back
#define mp make_pair
#define inf 10000
using ll = long long;
using P = pair<int,int>;
using Pll = pair<ll,ll>;

ll divisor=1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		rep(i,n)cin>>a[i];
		string s;
		cin>>s;
		if(s[n-1]=='1'){
			puts(1);
			continue;
		}
		vector<ll> v1;
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				v1.pb(a[i]);
				rep(j,v1.size()){
					sort(v1.begin(),v1.end(),greater<ll>());
					rep(k,v1.size()){
						if(j==k)continue;
						v1[k]=min(v1[k],v1[k]^v1[j]);
					}
				}
              sort(v1.begin(),v1.end(),greater<ll>());
			}else{
				rep(j,v1.size()){
					a[i]=min(a[i],a[i]^v1[j]);
				}
				if(a[i]!=0){
					puts(1);
					goto end;
				}
			}
			
		}
		puts(0);
      	end:;
	}
}