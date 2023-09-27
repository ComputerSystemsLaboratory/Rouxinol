#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	while (1)
	{
		int e = 0;
		int f = 0;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		int d[200];
		for (int i = 0; i < a; i++)
		{
			cin >> d[i];
		}
		sort(d, d + a);
		for (int i = b; i <= c; i++)
		{
			if (d[a - i] - d[a - i - 1] >= e)
			{
				e = d[a - i] - d[a - i - 1];
				f = i;
			}
		}
		cout << f << endl;
	}
return 0;
}