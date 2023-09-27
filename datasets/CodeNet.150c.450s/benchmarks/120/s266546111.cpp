#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <cstring>

#define INF_LL 9000000000000000000
#define INF 2000000000

#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)

using namespace std;

typedef long long ll;
typedef pair<int, int> PII;
typedef pair<int, PII> PPII;
typedef pair<int, PPII> PPPII;

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

bool senbei[10010][11] = {};
int main(void){
	int r, c;
	while(cin >> r >> c && r && c){
		ll res = 0;
		memset(senbei, 0, sizeof senbei);
		REP(i, r){
			REP(j, c){
				cin >> senbei[j][i];
			}
		}
		REP(i, 1 << r){
			bool isTurned[10] = {};
			int a = i;
			int b = 0;
			int cnt = 0;
			while(a > 0){
				if(a & 1){
					isTurned[b] = true;
				}
				b++;
				a = a >> 1;
			}
			REP(j, c){
				int cnt_a = 0;
				REP(k, r){
					if(isTurned[k] ^ senbei[j][k]) cnt_a++;
				}
				cnt += max(cnt_a, r-cnt_a);
			}
			res = max(res, (ll)cnt);
		}
	cout << res << endl;
	}
}