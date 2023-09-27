#include<cstdio>
#include<functional>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cctype>
#define rep(i,a) for(int i=0;i<a;i++)
#define rep2(i,a) for(int i=1;i<a;i++)
using namespace std;
long long c[100][100];
int main(void)
{
	int m,l,n;
	int a[100][100],b[100][100];
	cin>>n>>m>>l;
	rep(i,n)rep(j,m)cin>>a[i][j];
	rep(i,m)rep(j,l)cin>>b[i][j];
	rep(i,n)rep(j,l)rep(k,m) c[i][j]+=a[i][k]*b[k][j];
	rep(i,n){
		cout<<c[i][0];
		rep2(j,l) {
			if(j==l) cout<<c[i][j];
			else cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
	return 0;
}