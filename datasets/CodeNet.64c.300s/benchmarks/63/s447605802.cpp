#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int  a, b, a1, b1, c, g;
	long l;
	
	while (cin >> a >> b)
	{
		a1 = a;
		b1 = b;
		
		if (a == 0 || b == 0)
		{
			break;
		}
		
		else if (a1 == b1)
		{
			g = a1;
			
		}
		else
		{
			while (1)
			{
				c = abs(a - b);
				if (c == 0)
				{
					break;
				}

				if (a > b)
				{
					a = c;
					g = c;
				}
				else if (a < b)
				{
					b = c;
					g = c;
				}
			}
		}
		l = (a1 / g)*b1;

		cout << g << " " << l << endl;

		a1 = a; b1 = b;
	}
}