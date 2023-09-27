#include<bits/stdc++.h>
using namespace std;
const int N=10005;
int n,q,f[N];
int find(int u){
	return f[u]==u?u:f[u]=find(f[u]);
}
signed main(void){
	cin>>n>>q;
	for(int i=0;i<n;i++) f[i]=i;
	for(int i=0;i<q;i++){
		int x,y,k;
		cin>>k>>x>>y;
		if(k){
			if(find(x)==find(y))
				cout<<1<<endl;
			else
				cout<<0<<endl;
		}
		else
			f[find(x)]=find(y);
	}
}