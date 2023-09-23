#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char ulcase(char i)
{
	return 0;
}
int main()
{
	char s[1200] = {};
	
	fgets(s, 1200, stdin);
	
	int i = 0;
	while (1)
	{
		if (i > 1200)
			break;
		if ((*(s+i)) == '\0')
			break;
		
		char c = *(s + i);
		if (c >= 0x41 && c <= 0x5a) {
			c += 0x20;
			*(s+i) = c;
		} else if (c >= 0x61 && c <= 0x7a) {
			c -= 0x20;
			*(s+i) = c;
		}
		i++;
	}
	
	for (int i = 0; i < 1200; i++)
	{
		if (s[i] == 0 || s[i] == '\0')
			break;
		cout << s[i];
	}
	
	return 0;
}