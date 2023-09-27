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

bool check(int x, int y, int h, int w){
	return x < 0 || x >= w || y < 0 || y >= h;
}

int main(){
	int w, h;
	while(cin>>w>>h && w > 0 && h > 0){
		vector<string> v(h);
		rep(i, h) cin>>v[i];
		pii s;
		rep(i, h) rep(j, w) if(v[i][j] == '@') s.fi = i, s.se = j;
		int ans = 0;
		set<pii> used;
		used.insert(s);
		ans++;
		queue<pii> q;
		q.push(s);
		while(!q.empty()){
			pii p = q.front();
			q.pop();

			int x = p.se, y = p.fi;
			rep(i, 4){
				int nx = x + dx[i], ny = y + dy[i];
				if(check(nx, ny, h, w) || used.count({ny, nx}) || v[ny][nx] == '#') continue;
				used.insert({ny, nx});
				q.push({ny, nx});
				ans++;
			}
		}

		cout<<ans<<endl;

	}
}