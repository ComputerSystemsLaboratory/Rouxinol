#include <bits/stdc++.h>
using namespace std;

constexpr int dx[] = {-1, 0, 1, 0};
constexpr int dy[] = {0, 1, 0, -1};

int main() {
	for(int N; cin >> N && N;) {
		vector<int> x(N, 0), y(N, 0);

		for(int i = 1; i < N; ++i) {
			int n, d;
			cin >> n >> d;
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
		}

		const int width = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end()) + 1;
		const int height = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end()) + 1;

		cout << width << " " << height << endl;
	}

	return 0;
}