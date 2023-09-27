#include "bits/stdc++.h"
using namespace std;
int main() {
	int N; cin >> N;
	while (N != 0) {
		vector<int>A(86401, 0);
		int ans = 0, num = 0;
		char a, b, c, d, e, f, g, h;
		for (int i = 0; i < N; i++) {
			cin >> a >> b >> c >> d >> e >> f >> g >> h;
			int H = (a - '0') * 10 + (b - '0'), M = (d - '0') * 10 + (e - '0'), S = (g - '0') * 10 + (h - '0');
			A.at(H * 3600 + M * 60 + S) += 1;
			cin >> a >> b >> c >> d >> e >> f >> g >> h;
			H = (a - '0') * 10 + (b - '0'), M = (d - '0') * 10 + (e - '0'), S = (g - '0') * 10 + (h - '0');
			A.at(H * 3600 + M * 60 + S) -= 1;
		}
		for (int i = 0; i < 86401; i++) {
			num += A.at(i);
			ans = max(ans, num);
		}
		cout << ans << endl;
		cin >> N;
	}
}
