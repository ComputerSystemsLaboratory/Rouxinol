#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define RREP(i, a, n) for(int i=n-1; i>=a; i--)
#define INF 1000000000

int main() {
	int e;
	while (cin >> e, e) {
		int m = INF;
		for (int y = 0; y*y <= e; y++) {
			for (int z = 0; z*z*z <= e; z++) {
				int x = e - y*y - z*z*z;
				if (x < 0) continue;
				m = min(m, x + y + z);
			}
		}

		cout << m << endl;
	}
	return 0;
}