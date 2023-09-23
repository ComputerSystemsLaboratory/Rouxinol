#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;

	const int mod=1000000007;
	int64_t pow=1;
	int64_t c=m;
	int mask=1;
	while (mask<=n)
	{
		if ((n&mask)!=0)
		{
			pow*=c;
			pow%=mod;
		}
		c*=c;
		c%=mod;
		mask<<=1;
	}
	cout << pow << endl;
}






