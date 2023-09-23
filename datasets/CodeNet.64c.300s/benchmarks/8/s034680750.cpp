#include <iostream>
using namespace std;

void call(int n)
{
	int i = 1;
	int x = 1;
	
	while( true )
	{
		x = i;
		if( x % 3 == 0 )
		{
			cout << " " << i;
			++i;
			if( i > n )
				break;
			else
				continue;
		}
		
		do
		{
			if( x % 10 == 3 )
			{
				cout << " " << i;
				break;
			}
			x /= 10;
		}while( x );
		
		++i;
		if( i > n )
			break;
	}
	
	cout << endl;
}

int main()
{
int n;
cin >> n;
call(n);
return 0;
}