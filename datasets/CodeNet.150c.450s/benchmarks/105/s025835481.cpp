#include<bits/stdc++.h>
using namespace std;
#define int long long
int base[65],a[205];char s[205];
bool insert(int x){
	for(int i=64;i>=0;--i)
		if((x>>i)&1){
			if(!base[i]) return base[i]=x,1;
			x^=base[i];
		}
	return 0;
}
bool solve(int n){
	memset(base,0,sizeof(base));
	for(int i=1;i<=n;++i)
		cin>>a[i];
	cin>>(s+1);
	for(int i=n;i>=1;--i)
		if(insert(a[i]) && s[i]=='1') return 1;
	return 0;
}
signed main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}