#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
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
 
int main(){
	int n, q;
	cin>>n>>q;
	queue<pair<int,string> > que;
	string s; int m;
	rep(i, n){
		cin>>s>>m;
		que.push(pair<int,string>(m, s));
	}
	int t = 0;
	pair<int,string> p;
	while(!que.empty()){
		p = que.front();
		que.pop();
		if(p.fi - q > 0) {
			que.push(pair<int,string>(p.fi - q, p.se));
			t += q;
		}
		else {
			t += p.fi;
			cout<<p.se<<" "<<t<<endl;
		}
	}
}