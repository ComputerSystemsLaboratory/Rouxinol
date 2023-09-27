#include <bits/stdc++.h>
using namespace std;
#define r(z,x) for(int z=0;z<x;z++)
int a[100][100],b[100][100];
int main(){
	int n,m,l;
	cin>>n>>m>>l;
	r(i,n)r(j,m)cin>>a[i][j];
	r(i,m)r(j,l)cin>>b[i][j];
	r(i,n)r(j,l){long long sum=0;r(k,m)sum+=a[i][k]*b[k][j];(j==l-1)?cout<<sum<<endl:cout<<sum<<" ";}
}