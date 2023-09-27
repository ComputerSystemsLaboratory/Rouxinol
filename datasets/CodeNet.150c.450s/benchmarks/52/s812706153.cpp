#include <iostream>
#include <stack>
using namespace std;
int main( void )
{
	int n;
	stack <int> S;

	while ( cin >> n )
	{
		if ( n == 0 )
		{
			cout << S.top() << endl;
			S.pop();
		}
		else
		{
			S.push( n );
		}
	}

	return 0;
}