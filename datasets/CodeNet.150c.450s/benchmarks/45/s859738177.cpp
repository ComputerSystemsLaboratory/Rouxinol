#include <iostream>
using namespace std;
typedef long long int LL;
#define MOD 1000000007

LL pow(LL m, LL n)
{
	LL res = 1,x = 1,a = m;
	while (x <= n) {
		if ((x & n) > 0) {
			res *= a;
			res %= MOD;
		}
		a *= a;
		if(a >= MOD)
			a %= MOD;
		x <<= 1;
	}
	res %= MOD;
	return res;
}

int main()
{
	LL m, n;
	cin >> m >> n;
	cout << pow(m,n) << endl;
	return 0;
}