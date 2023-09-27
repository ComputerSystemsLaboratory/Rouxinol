#define		_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

#define		MAX			1200

int main()
{
	int		moji['z' - 'a' + 1] = { 0 };
	char	m;

	while (cin >> m)
	{
		if (('A' <= m) && (m <= 'Z'))
		{
			m = tolower(m);
		}

		if (('a' <= m) && (m <= 'z'))
		{
			moji[m - 'a']++;
		}
	}

	for (char c = 'a'; c <= 'z'; c++)
	{
		printf("%c : %d\n", c, moji[c - 'a']);
	}


	return 0;
}