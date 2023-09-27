#include<bits/stdc++.h>
#define mod 1000000009
#define int long long 
#define garou ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int pow(int p,int r){
	int ans=1;
	while(r>0){
     if(r&1){
		 ans=((ans%mod)*(p%mod))%mod;
	 }
	 r=r>>1;
     p=((p%mod)*(p%mod))%mod;
	}
	return ans;
}
signed main() {
    garou;
    int n;
	cin>>n;
		int re=0;
		int x=1;
		map<int,int> mp;
		while((x*x)<=n){
			int y=1;
			while((y*y)<=n){
				int z=1;
				while((z*z)<=n){
					int a=pow(x,2)+pow(y,2)+pow(z,2)+(x*y)+(y*z)+(x*z);
					mp[a]++;
					z++;
				}
				y++;
			}
		x++;
		}
		for(int i=1;i<=n;i++)
		cout<<mp[i]<<endl;
}