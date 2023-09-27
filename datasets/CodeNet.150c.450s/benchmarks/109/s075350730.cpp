#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
const int INF = 10000000;

int tos(int h, int m, int s){
	return h * 3600 + m * 60 + s;
}

bool cmp(pii p1, pii p2){
	if(p1.se != p2.se) return p1.se < p2.se;
	return p1.fi < p2.fi;
}

int main(){
	int n;
	int h, m, s;
	pii p;
	while(cin>>n && n > 0){
		vector<pii> v;
		for(int i = 0; i < n; i++){
			scanf("%d:%d:%d", &h, &m, &s);
			p.se = tos(h, m, s);
			scanf("%d:%d:%d", &h, &m, &s);
			p.fi = tos(h, m, s);
			v.pb(p);
		}
		sort(all(v), cmp);
		vi u;
		u.pb(v[0].fi);
		for(int i = 1; i < v.size(); i++){
			for(int j = 0; j < u.size(); j++){
				if(u[j] <= v[i].se){
					u[j] = v[i].fi;
					break;
				}
				if(j == u.size() - 1) {
					u.pb(v[i].fi);
					break;
				}
			}
			sort(all(u));
		}
		cout<<u.size()<<endl;
	}
}