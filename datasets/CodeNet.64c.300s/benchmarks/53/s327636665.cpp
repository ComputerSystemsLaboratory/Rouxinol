#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int i, x;
	i = a;
	x = 0 ;
	while ( i <= b )
	{
		if (c % i == 0)
		{
			x++;
		}
		i += 1;
	}
	cout << x << endl;
}