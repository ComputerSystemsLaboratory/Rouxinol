#include<iostream>
using namespace std;
int main()
{
	int a, b = 1;
	while(true)
		{
		cin >> a;
		if ( a == 0 )break;
		else if ( a != 0 )
			cout << "Case " << b << ": " << a << endl;
		b++;
	}
	return 0;
}