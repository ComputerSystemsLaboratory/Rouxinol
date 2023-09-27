#include <bits/stdc++.h>
using namespace std;

int main()
{
	array<int, 6> d;
	map<int, int> m;
	array<string, 6> tbl = {"X2413X","3X05X2","15XX04","40XX51","2X50X3","X3142X"};

	int q = 0, t, f;
	for (int &x : d) {
		cin >> x;
		m[x] = q++;
	}
	cin >> q;
	while (q-- && cin >> t >> f)
		cout << d[tbl[m[t]][m[f]] - '0'] << endl;

	return 0;
}
