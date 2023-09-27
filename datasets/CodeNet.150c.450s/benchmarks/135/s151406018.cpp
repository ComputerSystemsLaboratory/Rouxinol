#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	while (cin >> N >> M && N > 0 && M > 0) {

		int h[1500], w[1500];
		int x[1501], y[1501];
		vector<int> b_m(1500001), b_p(1500001);
		int sum = 0;

		x[0] = 0;
		y[0] = 0;

		for (int i = 0; i < N; i++) {
			cin >> h[i];
			y[i + 1] = y[i] - h[i];
		}

		for (int i = 0; i < M; i++) {
			cin >> w[i];
			x[i + 1] = x[i] + w[i];
		}

		for (int i = 0; i <= M; i++) {
			for (int j = 0; j <= N; j++) {
				if (y[j] + x[i] < 0)
					b_m[(-1) * (x[i] + y[j])]++;

				else
					b_p[y[j] + x[i]]++;
			}
		}

		for (int i = 0; i < 1500001; i++) {
			int cnt;
			int n = b_p[i];
			if (n < 2)
				cnt = 0;
			else
				cnt = n*(n - 1) / 2;
			sum += cnt;
		}

		for (int i = 1; i < 1500001; i++) {
			int cnt;
			int n = b_m[i];
			if (n < 2)
				cnt = 0;
			else
				cnt = n*(n - 1) / 2;
			sum += cnt;
		}

		cout << sum << endl;
	}

    return 0;
}