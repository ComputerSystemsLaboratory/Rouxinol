#include<iostream>
#include<cmath>
typedef long long llong;
using namespace std;
const int mod = 1000000007;
llong pow(llong x, llong n)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return pow(x*x%mod, n / 2);
	else
		return pow(x*x%mod, n / 2)*x%mod;

}
int main()
{
	llong x, n;
	cin >> x >> n;
	cout << pow(x,n) << endl;
}
