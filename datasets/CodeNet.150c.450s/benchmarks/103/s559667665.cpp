#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		int n, s;
		int ans = 0;
		cin >> n >> s;
		if (n == 0 && s == 0)break;
		int comb = (1 << n) - 1;
		while (comb < (1 << 10))
		{
			int sum = 0;
			for (int i = 0; i < 10; i++)
			{
				if ((comb >> i) & 1)sum += i;
			}
			if (sum == s)ans++;
			int x = comb&-comb, y = comb + x;
			comb = ((comb&~y) / x >> 1) | y;
		}
		cout << ans << endl;
	}
	return 0;
}