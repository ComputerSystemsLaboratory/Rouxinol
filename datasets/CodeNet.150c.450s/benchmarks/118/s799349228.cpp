#include<iostream>

using namespace std;

int main(void) {
	int y, m, d, n;
	int res;
	int i, j;

	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> y >> m >> d;
		res = -d+1;
		for(j = m; j <= 10; j++) {
			if(y%3 != 0 && j%2 == 0) {
				res += 19;
			} else {
				res += 20;
			}
		}
		for(j = y+1; j < 1000; j++) {
			if(j%3 == 0) {
				res += 200;
			} else {
				res += 195;
			}
		}
		cout << res << endl;
	}

	return 0;
}

			