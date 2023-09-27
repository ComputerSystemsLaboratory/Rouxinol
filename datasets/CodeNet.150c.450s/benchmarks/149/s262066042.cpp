# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;

int Par[100000];   //???
int Rank[100000];  //??¨?????±???

//n????´???§?????????
void init(int n) {
	for (int i = 0; i < n; i++) {
		Par[i] = i;
		Rank[i] = 0;
	}
}

//??¨??????????±???????
int find(int x) {
	if (Par[x] == x) {
		return x;
	}
	else {
		return Par[x] = find(Par[x]);
	}
}

//x??¨y????±??????????????????????
void unite(int  x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	if (Rank[x] < Rank[y]) {
		Par[x] = y;
	}
	else {
		Par[y] = x;
		if (Rank[x] == Rank[y])Rank[x]++;
	}
}

bool same(int x, int y) {
	return find(x) == find(y);
}

int main() {
	int n, q;
	std::cin >> n >> q;
	init(n);
	int a, b, c;
	for (int i = 0; i < q; i++) {
		std::cin >> a >> b >> c;
		if (a == 0) {
			unite(b, c);
		}
		else {
			std::cout << (same(b, c) ? 1 : 0) << std::endl;
		}
	}
}