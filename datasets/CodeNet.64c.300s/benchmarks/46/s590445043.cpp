
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

	while (1) {
		int a, d, n;
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0) break;
		
		/*if (a == 1 && d == 1 && n == 1) {
			cout << 2 << endl;
			continue;
		}*/

		int cnt = 0, t, k = 0;
		while (1) {
			t = a + d*k;
			bool flag = true;
			for (int i = 2; i*i <= t; i++) {
				if (t%i == 0) {
					flag = false;
					break;
				}
			}
			if (flag && t!=1) cnt++;
			if (cnt == n) {
				cout << t << endl;
				break;
			}
			k++;
		}
	}


	return 0;
}