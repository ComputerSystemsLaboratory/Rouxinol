#include <bits/stdc++.h>

int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

void input() {
	int n = ri();
	std::vector<int> c(26);
	for (auto &i : c) i = ri();
	std::vector<std::vector<int> > val(n, std::vector<int>(26));
	for (auto &i : val) for (auto &j : i) j = ri();
	
	std::vector<int> all(n);
	for (auto &i : all) i = ri() - 1;
	
	auto score = [&] (const std::vector<int> &all) {
		int last[26];
		for (auto &i : last) i = -1;
		int res = 0;
		for (int i = 0; i < n; i++) {
			int cur = all[i];
			last[cur] = i;
			for (int j = 0; j < 26; j++) res -= c[j] * (i - last[j]);
			res += val[i][cur];
			printf("%d\n", res);
		}
	};
	
	score(all);
}

int main() {
	input();
	return 0;
}
