#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	
	while (1)
	{int a=1;
	int b;
	int c=0;
	int cz=0;

		cin >> a;
		if (a == 0)
		{
			break;
		}
		b = 1000-a;

		if (b >= 500)
		{
			cz = b / 500;
			c = c +cz ;
			b = b % 500;
		}
		 if (b >= 100)
		{
			cz = b /100;
			c = c + cz;
			b = b % 100;
			
		}
		 if (b >= 50)
		{
			cz = b / 50;
			c = c + cz;
			b = b % 50;
		 }
		 if (b >= 10)
		{
			cz = b / 10;
			c = c + cz;
			b = b % 10;
		}
		 if (b >= 5)
		{
			cz = b / 5;
			c = c + cz;
			b = b % 5;
		 }
		 if (b >= 1)
		{
			cz = b /1;
			c = c + cz;
			b = b % 1;
		}

		cout << c << endl;
	}
	return 0;
}