#include <cstdio>
#include <iostream>
using namespace std;
int x, y;
int main()
{
	cin >> x >> y;
	while(x*y!=0)
	{
		if(x>y)
		{
			x=x%y;
		}
		else
		{
			y=y%x;
		}
	}
	cout << max(x, y) << endl;
	return 0;
}