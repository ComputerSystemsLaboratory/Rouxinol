#include <bits/stdc++.h>
using namespace std;
int f(int a,int b,int n){
	return a*a+b*b+n*n+a*b+a*n+b*n;
}
int main() {
	int n,x[10002];
	cin>>n;
	for(int i=1;i<=n;i++)x[i]=0;
	for(int a=1;a<=100;a++){
		for(int i=1;i<=100;i++)
			for(int j=1;j<=100;j++)
				if(f(i,j,a)<=n)x[f(i,j,a)]++;
	}
	for(int i=1;i<=n;i++)cout<<x[i]<<'\n';
	return 0;
}