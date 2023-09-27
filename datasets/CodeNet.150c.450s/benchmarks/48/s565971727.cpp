#include <iostream>
using namespace std;

static const int INF = 1000001;

int main() {
	while (true) {
		int e;
		cin >> e;
		if (e == 0) break;
		
		int i;
		for (i = 0; i * i * i <= e; i++)
			;
		int t = i - 1;
		
		int m = INF;
		for (int j = t; j >= 0; j--) {
			int tz = j * j * j;
			for (int k = 0; tz + k * k <= e; k++) {
				int ty = k * k;
				int tx = e - tz - ty;
				if (tx + k + j < m)
					m = tx + k + j;
			}
		}
		
		cout << m << endl;
	}
	return 0;
}