#include <iostream>
#include <vector>
using namespace std;

#define NUM 30

int main( void )
{
	vector <bool> at( NUM + 1, false );

	for ( int i = 0; i < NUM; i++ )
	{
		int student;
		cin >> student;
		at[student] = true;
	}

	for ( int i = 1; i < NUM + 1; i++ )
	{
		if ( at[i] == false )
			cout << i << endl;
	}

	return 0;
}