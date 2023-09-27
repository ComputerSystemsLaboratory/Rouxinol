#include <iostream>
using namespace std;
int main()
{
	int n[26] = {}, i, t;
	char c;

	while( true )
	{
		t = 0;
		while( true )
		{
			cin.get(c);
			if( c == '\n' )
				break;

			i = -1;
			if( 'a' <= c && c <= 'z')
				i = c - 'a';
			else if( 'A' <= c && c <= 'Z')
				i = c - 'A';

			if( i != -1 )
				++n[i];
			++t;
		}

		if( 0 == t )
			break;
	}

	for(i = 0; i < 26; ++i)
	{
		c = i + 'a';
		cout << c << " : " << n[i] << "\n";
	}

	return 0;
}