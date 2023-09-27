#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int G[101][101];
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
int u,k,v;
cin>>u>>k;
for(int j=0;j<k;j++){
cin>>v;
G[u][v]=1;
}
}
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
	cout<<G[i][j];
	(j==n)?cout<<endl:cout<<" ";
	}
}
return 0;
}