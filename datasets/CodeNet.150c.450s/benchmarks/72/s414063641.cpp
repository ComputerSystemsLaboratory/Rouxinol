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
			str += '\n';
			break;
		}
		if (islower(ch))
		{
			str += (char)toupper(ch);
		}
		else if (isupper)
		{
			str += (char)tolower(ch);
		}
	}
	printf("%s", str.c_str());
	return 0;
}