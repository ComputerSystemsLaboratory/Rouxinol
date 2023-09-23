#include <iostream>
#define MOD 1000000007
using namespace std;

long long pow(long long x,long long n) {
	if (n == 0)return 1;
	long long res = pow((x*x)%MOD, n / 2);
	if (n % 2 == 1) {
		res = ((res%MOD) * x) %MOD;
	}
	return res%MOD;
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	long long m, n; cin >> m >> n;
	cout << pow(m, n) << endl;
}