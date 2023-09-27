#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string toLower ( string s )
{
	string t = s;
	for ( int i = 0 ; i < s.size() ; i++ )
	{
		t[i] = tolower(s[i]);
	}
	return t;
}
int main()
{
	string s1, s2;
	cin >> s1;
	s1 = toLower (s1);
	int a = 0;

	while ( 1 )
	{
		cin >> s2;
		if ( s2 == "END_OF_TEXT" )
		{
			break;
		}
		else
		{
			s2 = toLower (s2);
			if ( s1 == s2 )
			{
				a++;
			}
		}
	}
	cout << a << endl;

	return 0;
}
