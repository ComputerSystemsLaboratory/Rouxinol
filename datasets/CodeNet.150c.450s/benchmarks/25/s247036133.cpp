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
	int count[26] = { 0 };
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); ++i)
		{
			char c = tolower(s[i]);
			count[c - 'a']++;
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		cout << char(i + 'a') << " : " << count[i] << endl;
	}
}

int main()
{
	solve();
	return(0);
}