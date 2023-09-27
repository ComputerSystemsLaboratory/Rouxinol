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

double outer_product(double a[2], double b[2]){
	return a[0]*b[1]-a[1]*b[0];
}

inline double sgn(double x){
	if(x>EPS)return 1;
	else if(abs(x)<EPS)return 0;
	return -1;
}

bool chk(double a[8]){
	double xa[3][2];
	rep(i,3){
		rep(j,2)xa[i][j]=a[i*2+j]-a[6+j];
	}
	double op[3];
	rep(i,3)op[i]=outer_product(xa[i], xa[(i+1)%3]);
	return sgn(op[0])==sgn(op[1]) && sgn(op[1])==sgn(op[2]);
}

int main(){
	while(cin>>a[0]){
		rep(i,7)cin>>a[i+1];
		cout<<(chk(a) ? "YES" : "NO")<<endl;
	}
	
	return 0;
}