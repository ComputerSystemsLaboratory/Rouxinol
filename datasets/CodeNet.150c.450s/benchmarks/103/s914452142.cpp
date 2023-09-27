#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
using namespace std;



int main()
{
	int n, s;
	while (cin >> n >> s)
	{
		int ans = 0;
		if (n == 0 && s == 0)
		{
			break;
		}
		
		for (int i = 0; i < 1023; i++)
		{
			int p = i;
			int sum = 0, cnt = 0;
			for (int j = 0; j < 10; j++)
			{
				if (p % 2 == 1)
				{
					sum += j;
					cnt++;
				}
				p = p / 2;
			}

			if (cnt == n && sum == s)
			{
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}