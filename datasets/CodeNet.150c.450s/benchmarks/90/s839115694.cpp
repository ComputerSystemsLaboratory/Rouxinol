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
#define F first
#define S second
#define p2(a,b)		cout<<a<<"\t"<<b<<endl
#define p3(a,b,c)		cout<<a<<"\t"<<b<<"\t"<<c<<endl


int main(){
	li num;
	map<li,li> table;
	while(cin>>num){
		table[num]++;
	}
	
	vector<pair<li,li> > s;
	
	for(map<li, li>::iterator it=table.begin(); it!=table.end(); it++){
		s.pb(mp(it->S, -(it->F)));
	}
	
	sort(allof(s) ,greater<pair<li,li> >());
	
	//rep(i,sz(s)){p2(s[i].F, s[i].S);}
	
	li maxval=s[0].F;
	cout<<-s[0].S<<endl;
	li ma=1;
	while(s[ma].F==maxval){
		cout<<-s[ma].S<<endl;
		ma++;
	}
	
	return 0;
}