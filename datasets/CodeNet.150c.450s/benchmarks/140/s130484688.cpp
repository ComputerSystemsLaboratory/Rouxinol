#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
#include<map>
#include<set>
#include<sstream>
#include<bitset>
using namespace std;

typedef long long ll;


struct union_find_tree{
	vector<int>data;
	union_find_tree(int n):data(n,-1){}
	bool unite(int x, int y) {
		x = find(x); y = find(y);
		if (x != y) {
			if (data[y] < data[x])swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool is_same(int x, int y) { return find(x) == find(y); }
	int find(int x) { return data[x] < 0 ? x : data[x] = find(data[x]); }
	int size(int x) { return -data[find(x)]; }
};

int main() {
	int n, m;
	cin >> n >> m;
	vector<tuple<int, int,int>>es;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		es.push_back(make_tuple(c, a, b));
	}
	sort(es.begin(), es.end());
	union_find_tree uf(n);
	int ans = 0;

	for (int i = 0; i < m; i++) {
		if (uf.unite(get<1>(es[i]), get<2>(es[i])))ans += get<0>(es[i]);
	}
	cout << ans << endl;
	return 0;
}