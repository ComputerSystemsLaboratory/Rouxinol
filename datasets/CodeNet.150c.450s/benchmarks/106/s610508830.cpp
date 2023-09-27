#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int s, e, v; cin >> s >> e >> v;
	int ans = 0;
	for (int i = s; i <= e; ++i) {
		if (v % i == 0) ++ans;
	}
	cout << ans << endl;
}