
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <array>
#include <cassert>
#include <bitset>
using namespace std;
using LL = long long;

struct BIT {
	vector<LL>seg;
	int width;
	BIT(int x) :width(1) {
		while (width<x)width *= 2;
		seg.resize(width + 1);
	}
	void add(int x, LL val) {
		x++;
		while (x <= width) {
			seg[x] += val;
			x += (x&-x);
		}
	}
	LL query(int x) {
		LL res = 0;
		while (x>0) {
			res += seg[x];
			x -= (x&-x);
		}
		return res;
	}
};

int n, q;

int main() {
	cin >> n >> q;
	BIT bit(n);
	for (int i = 0; i<q; ++i) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0) {
			bit.add(x - 1, y);
		}
		else {
			LL ans = bit.query(y) - bit.query(x - 1);
			cout << ans << endl;
		}
	}
	return 0;
}


