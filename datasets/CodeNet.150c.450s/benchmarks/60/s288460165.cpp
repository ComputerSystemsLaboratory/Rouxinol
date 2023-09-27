#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[101][101];
	memset(a,0,sizeof(a));
	cin>>n;
	int u,k;
	for(int i = 0;i < n;i++){
		cin>>u>>k;
		u--;
		for(int j=0;j<k;j++){
			int x;
			cin>>x;
			x--;
			a[u][x]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j)cout<<" ";
			cout<<a[i][j];
		}
		cout<<endl;
	}
} 
