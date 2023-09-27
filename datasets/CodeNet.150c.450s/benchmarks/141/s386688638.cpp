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

double xx[3], yy[3], x, y;

void solve(){
	double v1[2], vp[2];
	bool sign[3];
	rep(i,3){
		v1[0]=xx[(i+1)%3]-xx[i];
		v1[1]=yy[(i+1)%3]-yy[i];
		vp[0]=x-xx[i];
		vp[1]=y-yy[i];
		
		if(v1[0]*vp[1] - v1[1]*vp[0]>0)sign[i]=true;
		else sign[i]=false;
	}
	if((sign[0]&&sign[1]&&sign[2]) || (!sign[0]&&!sign[1]&&!sign[2]))puts("YES");
	else puts("NO");
}

int main(){
	
	while(cin>>xx[0]){
		cin>>yy[0]>>xx[1]>>yy[1]>>xx[2]>>yy[2]>>x>>y;
		solve();
	}
	
	return 0;
}