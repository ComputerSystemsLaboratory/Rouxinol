#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main( void )
{
	while ( !cin.eof() )
	{
		vector <int> A(4);
		vector <int> B(4);

		for ( int i = 0; i < 4; i++ )
		{
			cin >> A[i];
		}

		for ( int i = 0; i < 4; i++ )
		{
			cin >> B[i];
		}

		if ( cin.eof() )
			break;

		int blow = 0;
		for ( vector <int>::iterator it = B.begin(); it != B.end(); it++ )
		{
			if ( find( A.begin(), A.end(), *it ) != A.end() )
			{
				blow ++;
			}
		}

		vector <int>::iterator it_a = A.begin();
		vector <int>::iterator it_b = B.begin();

		int hit = 0;
		while ( it_a != A.end() )
		{
			if ( *it_a == *it_b )
				hit++;
			it_a++;
			it_b++;
		}

		blow -= hit;

		cout << hit << " " << blow << endl;

	}

	return 0;
}