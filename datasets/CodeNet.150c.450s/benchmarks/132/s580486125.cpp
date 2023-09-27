#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n,p;
	while (cin >> n >> p && n != 0 && p != 0) {
		vector<int> a(n, 0);
		int flag = n;
		int winner;

		int i = 0;
		while (1) {
			if (p != 0) {
				if (a[i % n] == 0) flag--;
				a[i % n] += 1;
				p--;	
			} else if (a[i % n] != 0) {
				flag++;
				p += a[i % n];
				a[i % n] = 0;
			}
			if (p == 0 && flag == n - 1) {
				winner = i % n;
				break;
			}

			i++;
		}
		cout << winner << endl;
	}
	return 0;
}
