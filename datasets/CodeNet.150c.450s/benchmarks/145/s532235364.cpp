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

vector<string> split(const string &str, char delim){
  vector<string> res;
  size_t current = 0, found;
  while((found = str.find_first_of(delim, current)) != string::npos){
    res.push_back(string(str, current, found - current));
    current = found + 1;
  }
  res.push_back(string(str, current, str.size() - current));
  return res;
}

int main(){
	map<string,li> table;
	string sin;
	string longest="";
	getline(cin,sin);
	vector<string> ss=split(sin, ' ');
	
	rep(i,sz(ss)){
		table[ss[i]]++;
		if(sz(ss[i])>sz(longest))longest=ss[i];
	}
	
	vector<pair<li,string> > s;
	
	for(map<string, li>::iterator it=table.begin(); it!=table.end(); it++){
		s.pb(mp(it->S, (it->F)));
	}
	
	sort(allof(s) ,greater<pair<li,string> >());
	
	//rep(i,sz(s)){p2(s[i].F, s[i].S);}
	
	cout<<s[0].S<<" "<<longest<<endl;
	
	return 0;
}