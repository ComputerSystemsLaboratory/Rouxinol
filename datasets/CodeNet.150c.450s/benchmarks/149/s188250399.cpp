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
	int size;
public:
	Union_find(int n){
		size = n;
		REP(i, n){
			par.push_back(i);
		}
	}

	int find(int x){
		if(x == par[x]) return x;

		return par[x] = find(par[x]);
	}

	void unite(int x, int y){
		x = find(x);
		y = find(y);
		if(x == y) return;

		par[x] = y;
	}

	bool same(int x, int y){
		return find(x) == find(y);
	}
};

int main(void){
	int n, q;
	cin >> n >> q;
	Union_find uf(n);
	
	REP(i, q){
		int com, x, y;
		cin >> com >> x >> y;
		if(com == 0){
			uf.unite(x, y);
		}else{
			if(uf.same(x, y)){
				cout << 1 << endl;
			}else{
				cout << 0 << endl;
			}
		}
	}
	return 0;
}