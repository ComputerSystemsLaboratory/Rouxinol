#include <iostream>

using namespace std;

#define DIV 1000000007LL

u_long mod(u_long m, u_long n)
{
	u_long res = 1;

	while (n > 0) {
		if (n & 1) {
			res *= m;
			res %= DIV;
		}
		n >>= 1;
		m *= m;
		m %= DIV;
	}

	return res;
}

int main(void)
{
    u_long m, n;
	cin >> m >> n;
	cout << mod(m, n) << endl;
    return 0;
}