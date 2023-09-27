#include <vector>
#include <iostream>
using namespace std;
int n, m;
int main() {
	while (cin >> n >> m, n) {
		int s = m;
		vector<int> v(n, 0);
		for (int i = 0; ; i = (i + 1) % n) {
			if (m != 0) v[i]++, m--;
			else m = v[i], v[i] = 0;
			if (m == 0 && s - m - v[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}