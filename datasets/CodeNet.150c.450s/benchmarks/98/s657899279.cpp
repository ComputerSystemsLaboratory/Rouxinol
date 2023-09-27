#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;



int main(){
	double n, m;
	vector<int> taro;
	vector<int> hanako;
	int tmp;

	while (cin >> n >> m && (n != 0 && m != 0)) {
		bool flag = false;
		int taro_total = 0;
		int hanako_total = 0;
		taro.clear();
		hanako.clear();

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			taro.push_back(tmp);
			taro_total += tmp;
		}
		for (int i = 0; i < m; i++) {
			cin >> tmp;
			hanako.push_back(tmp);
			hanako_total += tmp;
		}
		sort(taro.begin(), taro.end());
		sort(hanako.begin(), hanako.end());

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (taro_total - taro[i] + hanako[j] == hanako_total - hanako[j] + taro[i]) {
					cout << taro[i] << " " << hanako[j] << endl;
					flag = true;
					break;
				}
			}
			if (flag) {
				break;
			}
		}
		if (!flag) {
			cout << "-1" << endl;
		}
  }
	return 0;
}