#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={-1,0,1,-1,1,-1,0,1},DY[]={-1,-1,-1,0,0,1,1,1};

int w, h;
VII cs;

void dfs(int y, int x){
	int ans = 0;
	cs[y][x] = 0;
	rep(i, 8){
		int ny = y + DY[i], nx = x + DX[i];
		if(range(ny, 0, h - 1) && range(nx, 0, w - 1) && cs[ny][nx]){
			dfs(ny, nx);
		}
	}
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while(1){
		cs.clear();
		int ans = 0;
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		rep(i, h){
			VI c;
			rep(j, w){
				int a;
				cin >> a;
				c.pb(a);
			}
			cs.pb(c);
		}
		rep(i, cs.size()){
			rep(j, cs[i].size()){
				if(!cs[i][j]) continue;
				dfs(i, j);
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}