#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[101][101];
	int n,u,k,x;
	memset(a,0,sizeof(a));
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>u>>k;
		while (k--){
			  cin>>x;
			  a[u][x]=1;
		}
	}
	for (int i=1; i<=n; i++){
		cout<<a[i][1];
		for (int j=2; j<=n; j++)
		    cout<<' '<<a[i][j];
		cout<<'\n';
	}
	return 0;
}
