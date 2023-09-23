#include<cstdio>
#include<algorithm>
#include<functional>
#include<cstring>
#include<iostream>
#include<cmath>
#include<queue>
#include<cctype>
#include<string>
#define rep(i,a,b) for(i=a;i<b;i++)
using namespace std;
int main(void)
{
	int n,i,j,k,suma,sumb,a,b;
	while(1) {
		cin>>n;if(n==0) break;
		suma=0,sumb=0;
		rep(i,0,n) {
			cin>>a>>b;
			if(a>b) suma+=a+b;
			else if(b>a) sumb+=a+b;
			else suma+=a,sumb+=b;
		}
		cout<<suma<<" "<<sumb<<endl;
	}
	return 0;
}