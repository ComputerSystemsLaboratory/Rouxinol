#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, s, n) for(int i = s; i < n; ++i)
#define rep(i, n)		 REP(i, 0, n)
#define SORT(c)			 sort((c).begin(), (c).end())
#define IINF					INT_MAX
#define LLINF					LLONG_MAX
#define DEBUG					false
 
typedef long long				ll;
typedef pair <int, int> ii;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
	
	int w, h;
	
	while(cin >> w >> h, w, h){
		vector<string> mp(h);
		//vector<vector<bool> > used(h, vector<int>(w));
		rep(i, h) cin >> mp[i];
		
		int sx, sy;
		rep(i, h){
			rep(j, w) if(mp[i][j] == '@'){
				sx = j;
				sy = i;
			}
		}
		
		queue<ii> qu;
		qu.push(make_pair(sx, sy));
		
		int ans = 0;
		while(!qu.empty()){
			ii tmp = qu.front();
			qu.pop();
			ans++;
			
			
			rep(i, 4){
				int nx = tmp.first + dx[i];
				int ny = tmp.second + dy[i];
			
				if(nx < 0 || w <= nx) continue;
				if(ny < 0 || h <= ny) continue;
				
				if(mp[ny][nx] == '.'){
					qu.push(make_pair(nx, ny));
					mp[ny][nx] = '#';	
				}
				
			}
			
			
		}
		
		cout << ans << endl;
		
		
	}
	
	
	
	return 0;
}