#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, taro = 0, hanako = 0;
	string a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a < b) {
			hanako += 3;
		}
		else if (a == b) {
			taro++;
			hanako++;
		}
		else {
			taro += 3;
		}
	}
	cout << taro << ' ' << hanako << endl;
	return 0;
}