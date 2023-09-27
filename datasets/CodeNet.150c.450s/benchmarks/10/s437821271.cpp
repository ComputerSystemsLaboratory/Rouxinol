#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
#include<iostream>
#define TS 0
#define rep(i,a) for(i=1;i<=a;i++)
using namespace std;
int main(void)
{
	int n,i,j,k;
	int b,f,r,v;
	int bill[5][4][11];
	rep(i,4)rep(j,3)rep(k,10) {
		bill[i][j][k]=TS;
	}
	cin>>n;
	rep(i,n) {
		cin>>b>>f>>r>>v;
		bill[b][f][r]=bill[b][f][r]+v;
	}
	rep(i,4) {
		rep(j,3) {
			rep(k,10) printf("%2d",bill[i][j][k]);
			cout<<endl;
		}
		if(i==4) break;
		else {rep(j,20) cout<<"#";cout<<endl;}
	}
	return 0;
}