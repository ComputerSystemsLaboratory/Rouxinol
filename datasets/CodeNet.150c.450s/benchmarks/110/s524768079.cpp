#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <cstring>
#include <queue>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define fi first
#define se second
typedef pair<int,int> pii;

int cost[1100][1100];

int main() {
	int H, W, N;
	cin >> H >> W >> N;
	vector<string> s;
	s.push_back(string(W+2,'X'));
	rep(i,H) {
		string t;
		cin >> t; s.push_back("X" + t + "X");
	}
	s.push_back(string(W+2,'X'));

	int res = 0;
	rep(i,N) {
		queue<pii> q;
		memset(cost, -1, sizeof(cost));
		rep(j,H+2) {
			rep(k,W+2) {
				if(s[j][k] == (i ? i+'0' : 'S')) {
					q.push(pii(j,k));
					cost[j][k] = 0;
				}
			}
		}
		while(q.size()) {
			pii a = q.front(); q.pop();
			const int dxy[] = {1,0,-1,0,1};
			if(s[a.fi][a.se] == i+'1')
				res += cost[a.fi][a.se];
			rep(j,4) {
				int y = a.fi + dxy[j];
				int x = a.se + dxy[j+1];
				if(s[y][x] != 'X' && !(cost[y][x]+1)) {
					cost[y][x] = cost[a.fi][a.se]+1;
					q.push(pii(y,x));
				}
			}
		}
	}
	cout << res << endl;
}