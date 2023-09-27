#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int power(int m, int n) {
	long long res = 1, mm = m;
	while (n) {
		if (n & 1) res = (res * mm) % MOD;
		mm = (mm * mm) % MOD;
		n >>= 1;
	}
	return (int)res;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << power(m, n) << endl;
	return 0;
}