#include <bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	int w, n;
	cin >> w >> n;
	vector<int> res(w);
	for (int i = 0; i < w; i++) {
		res[i] = i + 1;
	}
	for (int i = 0, a, b; i < n; i++) {
		cin >> a >> c >> b;
		swap(res[a - 1], res[b - 1]);
	}
	for (int i = 0; i < w; i++) {
		cout << res[i] << endl;
	}
	return 0;
}