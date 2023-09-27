#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int z = 0; z < n; z++) {
		int y, m, d, sum = 0;
		cin >> y >> m >> d;
		for (int i = 999; i > y; i--) {
			if (i % 3 == 0) sum += (20 * 10);
			else sum += (20 * 5 + 19 * 5);
		}
		for (int i = 10; i > m; i--) {
			if (y % 3 == 0) {
				sum += 20;
			}
			else {
				if (i % 2 == 0) sum += 19;
				else sum += 20;
			}
		}
		if (y % 3 == 0 || m % 2 == 1) sum += (20 - d);
		else sum += (19 - d);
		sum++;
		cout << sum << endl;
	}
}