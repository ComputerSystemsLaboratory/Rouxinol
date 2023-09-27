#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , b, c, i, j;

	cin >> a >> b >> c;

	i = 0;

	for(j = a;j < b + 1;j++)
	{
		if (c % a == 0)
		{
			i++;
		}
		a++;
	}

if(a == 0 && b == 0)
{
	cout << 0 << endl;
}
else
{
	cout << i  << endl;
}
	return 0;
}
