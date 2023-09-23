#define MOD 1000000007

#include <iostream>

typedef long long int ll;

using namespace std;

ll n,m;
int main(void)
{
	cin >> m >> n;
	ll res = 1;
	ll cur = m;
	ll pw = 1;
	while(n != 0)
	{
		if(n % (pw * 2) != 0)
		{
			res = (res * cur) % MOD;
			n = n - pw;
		}
		pw = pw * 2;
		cur = (cur * cur) % MOD;
	}
	cout << res << endl;
}