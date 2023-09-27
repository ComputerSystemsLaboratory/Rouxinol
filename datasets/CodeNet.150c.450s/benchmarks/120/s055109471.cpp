#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
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

int senbei[10][10000];
int r, c;

int cnt(int *s[10]){
	int res = 0;
	REP(i, r){
		REP(j, c){
			if(s[i][j] == 0){
				res++;
			}
		}
	}
	return res;
}

int main(void){
	while(1){
		int s[10][10000];
		int flag;
		int res = INF;
		cin >> r >> c;
		if(r == 0 && c == 0) return 0;
		REP(i, r){
			REP(j, c){
				cin >> s[i][j];
				if(s[i][j] == 1){
				}
			}
		}
		for(int i = 0;i < pow(2, r);i++){
			int n[10000];
			fill(n, n+c, 0);
			REP(j, r){
				if((i & (int)pow(2, j)) == (int)pow(2, j)) flag = 1;
				else flag = 0;
				REP(k, c){
					if(s[j][k] == 1-flag){
						n[k]++;
					}
				}
			}
			int tmp = 0;
			REP(j, c){
				tmp += min(n[j], r-n[j]);
			}
			res = min(res, tmp);
		}
		cout << r*c-res << endl;
	}
}