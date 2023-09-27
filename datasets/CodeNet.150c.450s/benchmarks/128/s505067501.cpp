#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char Str[21];
	int StrLen;

	cin >> Str;

	StrLen = strlen( Str );

	while( 1 ){

		cout << Str[StrLen-1];

		StrLen--;

		if( StrLen == 0 ) break;
	}

	cout << endl;

	return 0;
}