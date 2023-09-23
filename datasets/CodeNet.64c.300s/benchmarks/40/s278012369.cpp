#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

void solve()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			cout << char(toupper(s[i]));
		}
		else if ('A' <= s[i] && s[i] <= 'Z')
		{
			cout << char(tolower(s[i]));
		}
		else
		{
			cout << s[i];
		}
	}
	cout << endl;
}

int main()
{
	solve();
	return(0);
}