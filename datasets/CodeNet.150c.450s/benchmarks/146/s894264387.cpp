#include<iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<sstream>
#include<algorithm>
#include<map>
#include<complex>
using namespace std;


#define li			long long int
#define rep(i,to)	for(int i=0;i<((int)(to));i++)
#define repp(i,start,to)	for(int i=(int)(start);i<((int)(to));i++)
#define pb			push_back
#define sz(v)		((li)(v).size())
#define bgn(v)		((v).begin())
#define eend(v)		((v).end())
#define allof(v)	(v).begin(), (v).end()
#define dodp(v,n)		memset(v,(li)n,sizeof(v))
#define bit(n)		(1ll<<(li)(n))
#define mp(a,b)		make_pair(a,b)
#define rin	rep(i,n)
#define EPS 1e-10
#define ETOL 1e-8
#define MOD 1000000007
#define p2(a,b)		cout<<a<<"\t"<<b<<endl
#define p3(a,b,c)		cout<<a<<"\t"<<b<<"\t"<<c<<endl

double a[8];

void solve(){
	double dx1=a[2]-a[0];
	double dx2=a[6]-a[4];
	double dy1=a[3]-a[1];
	double dy2=a[7]-a[5];
	bool ans;
	
	if(dx1==0)ans=(dx2==0);
	else ans=(dx2!=0 && dy1/dx1==dy2/dx2);
	if(ans) puts("YES");
	else puts("NO");
}

int main(){
	li n;
	cin>>n;
	
	rin{
		rep(i,8)cin>>a[i];
		solve();
	}
	
	return 0;
}