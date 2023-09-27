#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

//BIT??? 1-indexed ??§??±?????????!!!! [1, N] ??????????????????????????¨????????±?????¨????????¨???.
void add(int x, int val,vector<int>& bit)
{
	int N = bit.size() - 1;
	while (x <= N) {
		bit[x] += val;
		x += x & -x;
	}
}

int sum(int x,vector<int>& bit)
{
	int ret = 0;
	while (x) {
		ret += bit[x];
		x &= (x - 1);
	}

	return (ret);
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n, q; cin >> n >> q;

	// bit   1 - indexed
	vector<int> bit(n + 1);
	for (int i = 0; i < q; i++) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0) { add(x, y, bit); }
		else { cout << sum(y,bit) - sum(x - 1,bit) << endl; }
	}
}