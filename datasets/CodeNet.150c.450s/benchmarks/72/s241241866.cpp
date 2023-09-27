#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string>

int main()
{
	char ch;
	std::string str;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
		{
			break;
		}
		if (islower(ch))
		{
			str += (char)toupper(ch);
		}
		else if (isupper(ch))
		{
			str += (char)tolower(ch);
		}
		else
		{
			str += ch;
		}
	}
	printf("%s\n", str.c_str());
	return 0;
}