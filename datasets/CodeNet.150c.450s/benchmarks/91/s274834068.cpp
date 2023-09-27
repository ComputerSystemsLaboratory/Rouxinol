#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int ans = 0;
		n += 1;
		bool *p = new bool[n];
		fill(p, p + n, true);
		p[0] = p[1] = false;
		for (int i = 2; i * i < n; i++)
			if (p[i] == true)
				for (int j = i * i; j < n; j += i)
					p[j] = false;
		for (int i = 0; i < n; i++)
			if (p[i] == true)
				ans++;
		cout << ans << endl;
		delete[] p;
	}
	return 0;
}