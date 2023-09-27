#include <iostream>
#include <string.h>

using namespace std;
bool IsPrime[1000001];

void calc()
{
	memset(IsPrime, 1, sizeof(IsPrime));
	IsPrime[0] = false;
	IsPrime[1] = false;
	for(int i = 2; i < 1000001; ++i)
	{
		if(IsPrime[i])
		{
			for(int j = 2 * i; j < 1000001; j += i)
			{
				IsPrime[j] = false;
			}
		}
	}
}

void solve()
{
	calc();
	int a, d, n;
	while(cin >> a >> d >> n, a || d || n)
	{
		int count = 0;
		while(true)
		{
			if(count == n)
			{
				break;
			}
			if(IsPrime[a])
			{
				count++;
			}
			a += d;			
		}
		cout << a - d << endl;
	}
}

int main()
{
	solve();
	return(0);
}