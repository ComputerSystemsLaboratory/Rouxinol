#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	while (true) {
		int n, m;

		cin >> n >> m;

		if (n == 0 && m == 0) {
			break;
		}

		vector<int> taro, hanako;
		int t_sum = 0, h_sum = 0;

		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			taro.push_back(temp);
			t_sum += temp;
		}

		for (int i = 0; i < m; i++) {
			int temp;
			cin >> temp;
			hanako.push_back(temp);
			h_sum += temp;
		}

		int t = 1000, h = 1000;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int t_sum2 = t_sum;
				int h_sum2 = h_sum;

				t_sum2 = t_sum2 - taro[i] + hanako[j];
				h_sum2 = h_sum2 - hanako[j] + taro[i];

				if (t_sum2 == h_sum2) {
					if (taro[i] + hanako[j] < t + h) {
						t = taro[i];
						h = hanako[j];
					}
				}
			}
		}

		if (t == 1000 && h == 1000) {
			cout << -1 << endl;
		}
		else {
			cout << t << " " << h << endl;
		}
	}

	return 0;
}