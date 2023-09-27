#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a = 0;
	while (1)
	{
		int e = 1000000;
		cin >> a;
		if (a == 0)
		{
			break;
		}
		int d[1000];
		for (int i = 0; i < a; i++)
		{
			cin >> d[i];
		}
		sort(d, d + a);
		for (int i = 0; i < (a - 1); i++)
		{
			if (e > d[i + 1] - d[i])
			{
				e = d[i + 1] - d[i];
			}
		}
		cout << e << endl;
	}
return 0;
}