#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
#include <cmath>

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

int h, w;
string b[102];

void dfs(int y, int x){
	int dx[4] = {-1, 0, 1, 0};
	int dy[4] = {0, 1, 0, -1};
	char a = b[y][x];

	b[y][x] = '.';
	REP(i, 4){
		if(b[y+dy[i]][x+dx[i]] == a){
			dfs(y+dy[i], x+dx[i]);
		}
	}
}

int main(void){
	cin >> h >> w;
	while(h != 0 || w != 0){
		int res = 0;
		b[0] = string(w+2, '.');
		b[h+1] = string(w+2, '.');
		for(int i = 0;i < h;i++){
			cin >> b[i+1];
			b[i+1] = '.' + b[i+1] + '.';
		}
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				if(b[i+1][j+1] != '.'){
					dfs(i+1, j+1);
					res++;
				}
			}
		}
		cout << res << endl;
		cin >> h >> w;
	}
	return 0;
}