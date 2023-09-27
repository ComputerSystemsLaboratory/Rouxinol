#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

long long a[209];
vector<long long> v;

int bc(long long n)
{
	int s = 0;
	while (n) {
		s++;
		n /= 2;
	}
	return s;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc; cin >> tc;
	for (int ti = 0; ti < tc; ti++) {
		v.clear();
		int n; cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		string s; cin >> s;
		bool f = true;
		for (int i = n - 1; i >= 0; i--) {
			long long p = a[i];
			for (int j = 0; j < v.size(); j++)
				if (bc(v[j]) == bc(p))
					p = (p ^ v[j]);
			if (!p) continue;
			else {
				if (s[i] == '1') {
					f = false;
					break;
				}
				for (int j = 0; j < v.size(); j++)
					if (bc(v[j]) == bc(a[i]))
						a[i] = (a[i] ^ v[j]);
				v.push_back(a[i]);
				sort(v.begin(), v.end()); reverse(v.begin(), v.end());
			}
		}
		if (f) cout << 0 << '\n';
		else cout << 1 << '\n';
	}
	return 0;
}
