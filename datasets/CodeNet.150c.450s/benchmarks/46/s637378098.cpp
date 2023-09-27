#include<iostream>
using namespace std;
int main()
{
	int n, x;
	int a, b, c;
	int count;
	while(true)
	{
		count = 0;
		cin >> n >> x;
		if(n == 0 && x == 0)
			break;
		if(x < 6 || 3 * (n - 1) < x)
		{
			cout << count << endl;
			continue;
		}
		a = 1;
		b = 2;
		c = x - 3;
		if (c > n)
		{
			int tmp = c - n;
			b += tmp;
			c = n;
			if (b > c - 1)
			{
				a += b - c + 1;
				b = c - 1;
				if (a <= b - 1)
					count++;
			}
			else
				count++;
		}
		else
			count++;
		if(count != 0)
		{
			while(true)
			{
				b += 1;
				c -= 1;
				if (c > b)
				{
					count++;
				}
				else
				{
					a += 1;
					int tmp = x - (2 * a + 1);
					c = tmp >= n ? n : tmp;
					b = x - c - a;
					if(c > b && b > a)
					{
						count++;
					}
					else
					{
						break;
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
