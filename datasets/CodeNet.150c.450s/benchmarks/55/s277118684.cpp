#include <iostream>
using namespace std;
int main()
{
	char c;
	int v;

	while( true )
	{
		v = 0;

		while(true)
		{
			cin.get(c);
			if( !isdigit(c) )
				break;

			v += c - '0';
		}

		if( 0 == v)
			break;

		cout << v << "\n";	
	}

	return 0;
}