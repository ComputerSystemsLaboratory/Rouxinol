#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()
 
#define REP(i,s,e)	for(int i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)
#define REPE(i,s,e)	for(int i=s; i>e; i--)
#define repe(i,n)	REPE(i,n,-1)


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<vi> vvi;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=100000000;
const double EPS=1e-10;
//int mod=1000000007
 

vector<string> split(const string &s,char c){
	vector<string> ret;
	stringstream ss(s);
	string t;
	while(getline(ss,t,c)){
		ret.pb(t);
	}
	return ret;
}

int main(){
	string s;
	getline(cin,s);
	vector<string> v=split(s,' ');
	stack<int> sta;
	string e[3]={"+","-","*"};
	rep(i,v.size()){
		if(v[i]==e[0]||v[i]==e[1]||v[i]==e[2]){
			int a=sta.top();
			sta.pop();
			int b=sta.top();
			sta.pop();
			if(v[i]==e[0]) sta.push(a+b);
			else if(v[i]==e[1]) sta.push(b-a);
			else sta.push(b*a);
		}
		else sta.push(atoi(v[i].c_str()));
	}
	cout<<sta.top()<<endl;
}