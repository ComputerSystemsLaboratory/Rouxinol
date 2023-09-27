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

li table[9][1001][101];

li minsum(li n, li from){
	li res=0;
	repp(i,from,n+from)res+=i;
	return res;
}

li maxsum(li n){
	li res=0;
	for(li i=9; i>9-n; i--)res+=i;
	return res;
}

li solve(li n, li s, li from){
	//p3(n,s,from);
	if(n==1){
		if(s>=from && s<=9)return 1;
		else return 0;
	}
	li res=0;
	repp(i,from,10){
		if(minsum(n-1, i+1)>s-i)res+=0;
		else if(maxsum(n-1)<s-i)res+=0;
		else if(i<10 && table[n-2][s-i][i+1]>0) res+=table[n-2][s-i][i+1];
		else res+=solve(n-1,s-i,i+1);
	}
	table[n-1][s][from]=res;
	return res;
}

int main(){
	li n,s;
	while(1){
		cin>>n>>s;
		if(n==s && n==0)break;
		
		rep(i,n){
			rep(j,s+1){
				rep(k,10)table[i][j][k]=-1;
			}
		}
		
		li res=solve(n,s,0);
		cout<<res<<endl;
	}
	
	return 0;
}