#include <bits/stdc++.h>
using namespace std;

#define INF_LL (int64)1e18
#define INF (int32)1e9
#define REP(i, n) for(int64 i = 0;i < (n);i++)
#define FOR(i, a, b) for(int64 i = (a);i < (b);i++)
#define all(x) x.begin(),x.end()
#define fs first
#define sc second

using int32 = int_fast32_t;
using uint32 = uint_fast32_t;
using int64 = int_fast64_t;
using uint64 = uint_fast64_t;
using PII = pair<int32, int32>;
using PLL = pair<int64, int64>;

const double eps = 1e-10;

template<typename A, typename B>inline void chmin(A &a, B b){if(a > b) a = b;}
template<typename A, typename B>inline void chmax(A &a, B b){if(a < b) a = b;}

class UnionFind{
private:
	vector<int32> par;
	int32 n;

public:
	UnionFind(){}
	UnionFind(int32 n):n(n){
		par.resize(n, -1);
	}

	int32 find(int32 x){
		return par[x] < 0 ? x : par[x] = find(par[x]);
	}

	int32 size(int32 x){
		return -par[find(x)];
	}

	void unite(int32 x, int32 y){
		x = find(x);
		y = find(y);
		if(x == y) return;
		if(size(x) < size(y)) swap(x, y);
		par[x] += par[y];
		par[y] = x;
	}

	bool same(int32 x, int32 y){
		return find(x) == find(y);
	}
};

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int32 w, h;
	while(cin >> w >> h && w && h){
		UnionFind uf((w+2)*(h+2));
		vector<vector<int32>> f(h+2, vector<int32>(w+2, '0'));
		REP(i, h){
			REP(j, w){
				cin >> f[i+1][j+1];
			}
		}
		int32 dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
		int32 dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
		FOR(y, 1, h+1){
			FOR(x, 1, w+1){
				REP(k, 8){
					int32 yy = y+dy[k], xx = x+dx[k];
					if(f[y][x] == 1 && f[yy][xx] == 1 && !uf.same(yy*(w+2)+xx, y*(w+2)+x)){
						uf.unite(yy*(w+2)+xx, y*(w+2)+x);
					}
				}
			}
		}
		int32 cnt = 0;
		REP(y, h+2){
			REP(x, w+2){
				if(f[y][x] == 1 && uf.find(y*(w+2)+x) == y*(w+2)+x)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}

