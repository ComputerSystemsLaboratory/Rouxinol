#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,sse2,sse3,sse4,mmx")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>
#define int long long
using namespace __gnu_pbds;
using namespace std;

int n,a[210],x[70];
char c[210];

signed main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		memset(x,0,sizeof(x));
		bool flag=false;
		for(int i=n;i>=1;i--){
			if(c[i]=='0'){
				for(int j=60;j>=0;j--){
					if(a[i]&(1ll<<j)){
						if(!x[j]){
							x[j]=a[i];
							break;
						}
						else a[i]^=x[j];
					}
				}
			}
			else{
				for(int j=60;j>=0;j--){
					if(a[i]&(1ll<<j)){
						a[i]^=x[j];
					}
				}
				if(a[i]!=0){
					flag=true;break;
				}
			}
		}
		if(flag) cout<<1<<endl;
		else cout<<0<<endl; 
	}
	return 0;
}