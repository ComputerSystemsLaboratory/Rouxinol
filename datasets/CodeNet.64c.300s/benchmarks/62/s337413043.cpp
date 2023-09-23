#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
#include<iostream>
#define rep(i,a) for(i=0;i<a;i++) 
using namespace std;
int main(void)
{
	int n,m,sum,i,j;
	int gyoretu[101][101];
	int bectol[101];
	cin>>n>>m;
	rep(i,n)rep(j,m)cin>>gyoretu[i][j];
	rep(i,m) cin>>bectol[i];
	rep(i,n){
		sum=0;
		rep(j,m) sum+=gyoretu[i][j]*bectol[j];
		cout<<sum<<endl;
	}
	return 0;
}