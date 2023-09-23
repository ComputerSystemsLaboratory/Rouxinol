#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
using namespace std;

int n, s, res = 0;

void dfs(int sum,int now, int cnt) {
	if (now == 10) {
		if (sum == s&&cnt == n) {
			res++;
		}
		return;
	}
	dfs(sum, now + 1, cnt);
	dfs(sum + now, now + 1, cnt + 1);
	return;
}

int main() {
	while (1) {
		res = 0;
		cin >> n >> s;
		if (n == 0 && s == 0) return 0;
		dfs(0, 0,0);
		cout << res << endl;
	}
	return 0;
}