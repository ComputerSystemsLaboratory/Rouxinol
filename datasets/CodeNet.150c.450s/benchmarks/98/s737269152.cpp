#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, x, taroPoint, hanakoPoint, difference;
	vector<int> taro;
	vector<int> hanako;
	while (cin >> n >> m, n || m) {
		taroPoint = 0;
		hanakoPoint = 0;

		for (int i = 0; i < n; i++) {
			cin >> x;
			taro.push_back(x);
			taroPoint += x;
		}
		sort(taro.begin(), taro.end());

		for (int i = 0; i < m; i++) {
			cin >> x;
			hanako.push_back(x);
			hanakoPoint += x;
		}
		sort(hanako.begin(), hanako.end());
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (taroPoint - hanakoPoint == (taro[i] - hanako[j]) * 2) {
					cout << taro[i] << " " << hanako[j] << endl;
					goto LABEL;
				}
			}
		}
		cout << "-1" << endl;
		LABEL:
		taro.clear();
		hanako.clear();
	}
	return 0;
}