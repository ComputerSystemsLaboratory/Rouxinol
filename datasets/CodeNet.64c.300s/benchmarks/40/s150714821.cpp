#include <iostream>
#include <cctype>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	char ch;
	string s(1201, '\0');
	int i = 0;
	while (scanf("%c", &ch), ch != '\n')
	{
		if (isalpha(ch))
		{
			if (islower(ch))
			{
				ch = toupper(ch);
			}
			else
			{
				ch = tolower(ch);
			}
		}
		s[i++] = ch;
	}
	i = 0;
	while (s[i] != '\0')
	{
		cout << s[i++];
	}
	cout << endl;
}
