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

li a[10];

int main(){
	li t;
	cin>>t;
	rep(case_num, t){
		rep(i,10)cin>>a[i];
		li l=0, r=0;
		bool res=true;
		rep(i,10){
			if(a[i]<min(l,r)){
				res=false;
				break;
			}
			else if(a[i]>max(l,r)){
				if(l>=r)l=a[i];
				else r=a[i];
			}
			else if(a[i]>l)l=a[i];
			else if(a[i]>r)r=a[i];
			else{
				res=false;
				break;
			}
		}
		cout<<(res ? "YES" : "NO")<<endl;
	}
	
	return 0;
}