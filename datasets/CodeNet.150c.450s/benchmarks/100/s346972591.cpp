#include<iostream>
using namespace std;

long long  fac(long long x) {
	if (x == 0ll)
	{
		return 1ll;
	}
	else
	{
		return x*fac(x - 1ll);
	}
}

int main()
{
	long long n;
	cin >> n;
	cout << fac(n) << endl;
}