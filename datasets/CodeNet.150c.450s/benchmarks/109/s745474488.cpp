#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n, n) {
		vector<string> go(n), come(n);
		go.reserve(n); come.reserve(n);
		for (int i = 0; i < n; i++) {
			cin >> go[i];
			cin >> come[i];
		}
		sort(go.begin(), go.end());
		sort(come.begin(), come.end());
		int res = 0, tmp = 0, g = 0, c = 0;
		while (g != n || c != n) {
			if (g == n) {
				c++;
				tmp--;
			}
			else if (c == n) {
				g++;
				tmp++;
			}
			else {
				if (go[g] < come[c]) {
					g++;
					tmp++;
				}
				else {
					c++;
					tmp--;
				}
			}
			if (tmp > res)
				res = tmp;
		}
		cout << res << endl;
	}
	return 0;
}