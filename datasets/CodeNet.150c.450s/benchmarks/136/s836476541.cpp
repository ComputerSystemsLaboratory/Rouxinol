#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define int long long
using namespace std;

int gcd(int a, int b) {
	if (b == 0)return a;
	return gcd(b, a%b);
}
signed main() {
	vector<int>a(2);
	while (cin >> a[0] >> a[1]) {
		sort(a.begin(), a.end());
		int b = gcd(a[1], a[0]);
		cout << b << " " << a[1] * a[0] / b << endl;
	}
}