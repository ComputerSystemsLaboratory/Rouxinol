#include <bits/stdc++.h>
using namespace std;

long long n, r = 1;
int main() {
	cin >> n;
	for (long long i = 2; i <= n; ++i) r *= i;
	cout << r << '\n';
}
