#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int g[100][100];
int main(){
	int n;cin>>n;
	rep(i,n){
		int u,k;cin>>u>>k;u--;
		rep(j,k){
			int v;cin>>v;v--;
			g[u][v]=1;
		}
	}
	rep(i,n){
		rep(j,n){
			if(j)cout<<" ";
			cout<<g[i][j];
		}
		cout<<endl;
	}
}