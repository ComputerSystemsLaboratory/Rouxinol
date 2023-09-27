#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <queue>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>
#include <set>

#define INF_LL 9000000000000000000
#define INF 2000000000

#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)

using namespace std;

typedef long long ll;
typedef pair<int, int> PII;

class Union_find{
private:
	vector<int> par;
	vector<int> rank;
	int n;

public:
	Union_find(int a){
		n = a;
		for(int i = 0;i < n;i++){
			par.push_back(i);
			rank.push_back(0);
		}
	}

	int find(int x){
		if(par[x] == x){
			return x;
		}else{
			return par[x] = find(par[x]);
		}
	}

	void unite(int x, int y){
		x = find(x);
		y = find(y);
		if(x == y) return;

		if(rank[x] < rank[y]){
			par[x] = y;
		}else{
			par[y] = x;
			if(rank[x] == rank[y]) rank[x]++;
		}
	}

	bool same(int x, int y){
		return find(x) == find(y);
	}
};

int chain[10002];

int no(int idx){
	int c = 1;
	int p = idx - 1;
	int q = idx + 1;
	int res = 0;
	while(chain[p] == chain[idx]){
		p--;
		c++;
	}
	while(chain[q] == chain[idx]){
		q++;
		c++;
	}
	while(c >= 4){
		res += c;
		c = 0;
		if(chain[q] != chain[p]) return res;
		if(chain[q] == chain[p] && chain[p] == -1) return res;

		int org = chain[p];
		while(chain[p] == org){
			p--;
			c++;
		}
		while(chain[q] == org){
			q++;
			c++;
		}
	}
	return res;
}

int main(void){
	int H, W, N;
	int target = 1;
	int res = 0;
	int sx, sy;
	queue<PII> que;
	cin >> H >> W >> N;
	string field[1002];
	field[0] = string(1002, 'X');
	field[H+1] = string(1002, 'X');
	REP(i, H){
		cin >> field[i+1];
		field[i+1] = 'X' + field[i+1] + 'X';
		if(field[i+1].find('S') != -1){
			que.push(PII(field[i+1].find('S'), i+1));
			sx = que.front().first;
			sy = que.front().second;
		}
	}

	while(target <= N){
		int take[1002][1002];
		REP(i, 1002){
			fill(take[i], take[i]+1002, INF);
		}
		take[que.front().first][que.front().second] = 0;
		while(!que.empty()){
			PII p = que.front(); que.pop();
			int dx[4] = {-1, 0, 0, 1};
			int dy[4] = {0, -1, 1, 0};
			REP(i, 4){
				int x = p.first + dx[i];
				int y = p.second + dy[i];
				if(field[y][x] == 'X') continue;
				if(take[x][y] != INF) continue;
				else{
					if(field[y].substr(x, 1) == to_string(target)){
						res += take[p.first][p.second]+1;
						queue<PII>().swap(que);
						sx = x;
						sy = y;
						target++;
						break;
					}else{
						take[x][y] = min(take[x][y], take[p.first][p.second] + 1);
						que.push(PII(x, y));
					}
				}
			}
		}
		que.push(PII(sx, sy));
	}
	cout << res << endl;
}