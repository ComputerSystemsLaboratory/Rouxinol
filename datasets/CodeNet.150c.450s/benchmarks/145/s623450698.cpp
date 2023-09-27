#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
#include <ctime>

using namespace std;
  
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;
const double PI = acos(-1);

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

vector<string> split(const string& s, char c = ' '){
	vector<string> ret;
	string t; 
	stringstream ss(s);
	while(getline(ss, t, c)){
		ret.pb(t);
	}
	return ret;
}

int main(){
	string s;
	getline(cin,s);
	map<string, int> mp;
	vector<string> v = split(s);
	rep(i, v.size()){
		mp[v[i]]++;
	}
	string m, l;
	int a = 0;
	for(auto p : mp){
		if(a < p.se) m = p.fi, a = p.se;
		if(l.size() < p.fi.size()) l = p.fi;
	}
	cout<<m<<" "<<l<<endl;
}