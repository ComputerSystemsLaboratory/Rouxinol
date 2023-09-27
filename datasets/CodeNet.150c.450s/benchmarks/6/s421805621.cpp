#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	while (1)
	{
		cin >> a >> b >> c;

		if (a >= 0 && a <= 100 && b >= 0 && b <= 100 && c >= 0 && c<= 100)
			break;
	}

	
	if( a < b && b < c)
		cout << "Yes" << endl;
	else
		cout << "No" <<endl;

	return 0;
}