#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	string s,s2;
	cin >> s;
	rep(i,s.size())
	{
		s[i] = tolower(s[i]);
	}

	int count = 0;
	while(cin >> s2)
	{
		if(s2 == "END_OF_TEXT") break;
		
		rep(i,s2.size())
		{
			s2[i] = tolower(s2[i]);
		}
		if(s2 == s) count++;
		
	}

	cout << count << endl;
	return 0;
}