#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int calc(int a, int b) {
	if (!b)return a;
	return calc(b, a%b);
}
int main() {
	int a, b;
	while (cin >> a >> b) {
		int gcd = calc(max(a, b), min(a, b));
		a /= gcd; b /= gcd;
		cout << gcd << ' ' << gcd*a*b << endl;
	}
	return 0;
}