#define FOR(i, min, max) for(int (i) = (min); (i) < (max); (i)++)

#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n, c = 0;
	cin >> n;
	FOR(i, 0, n)
	{
		int r;
		cin >> r;
		if (r == 2 || r == 3)
		{
			c++;
			continue;
		}
		if (r > 1 && (r % 6 == 5 || r % 6 == 1))
		{
			bool ch = true;
			FOR(j, 2, (int)sqrt(r) + 1)
			{
				if (r % j == 0)
				{
					ch = false;
					break;
				}
					
			}
			if (ch)	c++;
		}
	}
	cout << c << endl;
	return 0;
}