#include<iostream>
#include<algorithm>
#include<math.h>
#define MAX 1000000;
using namespace std;

int main()
{
	long e;
	while (cin >> e && e != 0)
	{
		int min_m = MAX;
		for (int z = 0; z * z * z <= e; z++)
		{
			int y = sqrt(e - z * z * z);
			int x = e - (z * z * z) - (y * y);
			min_m = min(min_m, x + y + z);
		}
		cout << min_m << endl;
	}
	return 0;
}