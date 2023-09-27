#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string Shuffle ( string s, int h )
{
	string head = s.substr ( 0 , h );
	string tail = s.substr ( h , s.size()-h );
    return tail + head;
}
int main()
{
	string s;
	int m, h;

	for ( int i = 0; i <100; i++ )
	{
		cin >> s;
		if ( s == "-" )
		{
			break;
		}

		cin >> m;
		for ( int k = 0; k < m; k++ )
		{
			cin >> h;
			s = Shuffle(s ,h);
	    }
		cout << s << endl;
	}	
	return 0;
}
