#include <iostream>
using namespace std;

int main(void)
{
	int e, min;
	int x, y, z;

	while(cin >> e && e != 0)
	{
		min = e;
		for(z = 0; z*z*z <= e; z++)
		{
			for(y = 0; y*y <= e - z*z*z; y++)
			{
				x = e - z*z*z - y*y;

				if(x+y+z < min)
					min = x + y + z;
			}
		}
		cout << min << endl;
	}
	return 0;
}
