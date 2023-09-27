#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
#define X 10000000
int main() {
	int n, m; while (cin >> n >> m&&n&&m) {
		vector<int>taro, hanako;
		int num;
		for (int i = 0; i < n; i++) {
			cin >> num; taro.push_back(num);
		}
		for (int i = 0; i < m; i++) {
			cin >> num; hanako.push_back(num);
		}
		sort(taro.begin(), taro.end());
		sort(hanako.begin(), hanako.end());
		int sum1 = accumulate(taro.begin(), taro.end(), 0);
		int sum2 = accumulate(hanako.begin(), hanako.end(), 0);
		int sa = (sum1 - sum2);
		if (abs(sa) % 2 == 1) { cout << -1 << endl; continue; }
		sa /= 2;
		int f = 0;
		for (int i = 0; i < n; i++) {
			if (f)break;
			for (int j = 0; j < m; j++) {
				if (taro[i] - hanako[j] == sa) {
					cout << taro[i] << " " << hanako[j] << endl;
					goto loop_end;
				}
			}
		}
		cout << -1 << endl;
	loop_end:;
	}
	return 0;
}