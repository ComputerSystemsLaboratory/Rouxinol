#include <iostream>
using namespace std;

int avail(int depth, int sum, int minval) {
	if (depth == 0)
		return (sum == 0 ? 1 : 0);

	int ret = 0;
	for (int i = minval; i <= 9 && i <= sum; i++)
		ret += avail(depth-1, sum-i, i+1);
	return ret;
}

int main() {
	int n, s;
	while (cin >> n >> s, n||s) {
		cout << avail(n, s, 0) << endl;
	}
	return 0;
}