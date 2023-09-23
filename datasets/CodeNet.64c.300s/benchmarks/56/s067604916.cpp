#include <iostream>
#include <cstdio>

using namespace std;

int calcDay(int y, int m, int d) {
	int total_day = 0;
	for (int i = 1; i <= 1000; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (i % 3 == 0 || j % 2 != 0) {
				for (int k = 1; k <= 20; ++k) {
					total_day++;
					if (i == y && j == m && k == d) {
						return total_day;
					}
				}
			}
			else {
				for (int k = 1; k <= 19; ++k) {
					total_day++;
					if (i == y && j == m && k == d) {
						return total_day;
					}

				}
			}
		}
	}
	return total_day;
}

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int mday = calcDay(1000, 1, 1);

		int y, m, d;
		cin >> y >> m >> d;

		int bday = calcDay(y, m, d);

		printf("%d\n", mday - bday);
	
	}
}