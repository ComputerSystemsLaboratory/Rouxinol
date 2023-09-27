#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>
using namespace std;
typedef  long long int lint;
//typedef pair<int, int> IP;
typedef pair<lint, lint> LLP;
typedef pair<char, char>CP;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)
#define mp make_pair
#define P pair<int,int>

class UnionFindTree {
private:
	std::vector<int> par;   // 親
	std::vector<int> depth; // 木の深さ

public:
	// n要素で初期化
	UnionFindTree(int n) {
		for (int i = 0; i < n; i++) {
			par.push_back(i);
			depth.push_back(0);
		}
	}

	// 木の根を求める
	int find(int x) {
		if (par[x] == x) {
			return x;
		}
		else {
			return par[x] = find(par[x]);
		}
	}

	// xとyの属する集合を併合
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y)
			return;

		if (depth[x] < depth[y]) {
			par[x] = y;
		}
		else {
			par[y] = x;
			if (depth[x] == depth[y])
				depth[x]++;
		}
	}

	// xとyが同じ集合に属するか否か
	bool same(int x, int y) { return find(x) == find(y); }
};

int main() {
	int n, m;
	cin >> n >> m;
	UnionFindTree UFT = UnionFindTree(n + 1);
	int s, t;
	rep(i, m) {
		cin >> s >> t;
		UFT.unite(s, t);
	}
	int Q;
	cin >> Q;
	rep(i, Q) {
		cin >> s >> t;
		if (UFT.same(s, t)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}
