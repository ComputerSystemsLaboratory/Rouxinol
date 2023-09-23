#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < int(n); i++)
typedef long long ll;
using namespace std;

int gcd(int a, int b) {
	if (b == 0)return a;
	return gcd(b, a%b);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}