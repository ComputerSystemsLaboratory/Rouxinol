#include <iostream>
using namespace std;
int main()
{
	int n[26] = {}, i, t;
	char c;

	do
	{
		t = 0;
		while( cin.get(c) )
		{
			if( c == '\n' )
				break;

			if( 'a' <= c && c <= 'z')		++n[c - 'a'];
			else if( 'A' <= c && c <= 'Z')	++n[c - 'A'];
			++t;
		}
	}while( 0 != t );

	for(i = 0; i < 26; ++i)
		cout << char(i + 'a') << " : " << n[i] << "\n";

	return 0;
}