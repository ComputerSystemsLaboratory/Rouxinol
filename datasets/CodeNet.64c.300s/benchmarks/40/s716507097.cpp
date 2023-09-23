#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	// a-z 97-122
	// A-Z 65-90
	// a-A 32
	
	char ch;
	scanf("%c", &ch);
	while (ch != '\n')
	{
		if ( ch >= 97 && ch <= 122)
		{
			ch = (char)(ch - 32);
		}
		else if (ch >= 65 && ch <= 90)
		{
			ch = (char)(ch + 32);
		}
		printf("%c", ch);
		scanf("%c", &ch);
	}
	cout << endl;
	return 0;
} 