#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while (cin >> n, n) {
		vector<int> score(n);

		for (int i = 0; i < n; ++i) cin >> score[i];

		sort(score.begin(), score.end());

		int ans = 0;

		for (int i = 1; i < n - 1; ++i) ans += score[i];

		printf("%d\n", ans / (n - 2));
	}
}