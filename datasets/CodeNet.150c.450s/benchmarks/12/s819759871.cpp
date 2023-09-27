#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int h;
	cin >> h;
	vector<int> a(h + 1);
	for (int i = 1; i <= h; i++) cin >> a[i];

	for (int i = 1; i <= h; i++) {
		cout << "node " << i << ": ";
		cout << "key = " << a[i] << ", ";
		int parent = a[i / 2];
		if (1 <= i / 2 && i / 2 <= h) cout << "parent key = " << a[i / 2] << ", ";
		if (1 <= 2 * i && 2 * i <= h) cout << "left key = " << a[2 * i] << ", ";
		if (1 <= 2 * i + 1 && 2 * i + 1 <= h) cout << "right key = " << a[2 * i + 1] << ", ";
		cout << endl;
	}
}
