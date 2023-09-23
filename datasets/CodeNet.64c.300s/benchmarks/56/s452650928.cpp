#include<iostream>
using namespace std;

int main() {
	int sum_day = 0;

	for (int i = 1; i <= 999; i++) {
		for (int j = 1; j <= 10; j++) {
			for (int k = 1; k <= 19; k++) {
				sum_day++;
				if ((j % 2 != 0 || i % 3 == 0) && k == 19) sum_day++;
			}
		}
	}
	sum_day++;

	int n;
	cin >> n;
	int bir_day[100] = { 0 };
	for (int h = 0; h < n; h++) {
		int y, m, d;
		int flag = 0;
		cin >> y >> m >> d;
		for (int i = 1; i <= 999; i++) {
			for (int j = 1; j <= 10; j++) {
				for (int k = 1; k <= 19; k++) {
					bir_day[h]++;
					if ((i >= y) && (j >= m) && (k >= d)) {
						flag = 1;
						break;
					}
					if ((j % 2 != 0 || i % 3 == 0) && k == 19) bir_day[h]++, k++;
					if ((i >= y) && (j >= m) && (k >= d)) {
						flag = 1;
						break;
					}
				}
				if (flag == 1)break;
			}
			if (flag == 1)break;
		}
		cout << sum_day - bir_day[h] << endl;
	}
	return 0;
}