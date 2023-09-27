#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
	int a, b, c;

	cin >> a >> b >> c;

	if (a < b)
	{
		if(b < c)
		{
			cout << "Yes" << endl;
			exit(0);
		}
	}
	cout << "No" << endl;
	
	return 0;
}