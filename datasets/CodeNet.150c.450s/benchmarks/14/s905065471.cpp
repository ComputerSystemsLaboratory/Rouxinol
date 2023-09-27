#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define int long long
using namespace std;

signed main() {
	int a;
	cin >> a;
	for (int b = 1; b <=a; b++) {
		if (b % 3 == 0) { cout << " " << b; continue; }
		string c = to_string(b);
		for (int d = 0; d < c.length(); d++) {
			if (c[d] == '3') { cout << " " << b; break; }
		}
	}
	cout << endl;
}