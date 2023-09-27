#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
//cin.sync_with_stdio(false);
//streambuf
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int mincost[5001];
vector<pii> tx(5001);
vector<vector<int>> way(5001);
int main() {
	int n, r;
	while (cin >> n >> r, r) {
		vector<int> list(n);
		for (int i = 0; i < n; i++)list[i] = i + 1;
		for (int i = 0; i < r; i++) {
			int p, c;
			cin >> p >> c;
			vector<int> buf(list.end() - p + 1 - c, list.end() - p + 1);
			list.erase(list.end() - p + 1 - c, list.end() - p + 1);
			list.insert(list.end(), buf.begin(), buf.end());
		}
		cout << list.back() << endl;
	}
}