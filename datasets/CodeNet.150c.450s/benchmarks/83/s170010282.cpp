#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxn=100+10,maxm=10000+10;
int n,m;
int v[maxn],w[maxn];
int f[maxm];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>v[i]>>w[i];
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
		for(int j=m;j>=w[i];j--)
			f[j]=max(f[j],f[j-w[i]]+v[i]);
	cout<<f[m]<<endl;
	return 0;
}