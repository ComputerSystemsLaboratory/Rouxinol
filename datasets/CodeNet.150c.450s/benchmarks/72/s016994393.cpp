#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main()
{
	char c;

	while(1) {
		scanf("%c", &c);
		if ( c == '\n' ) break;

		if (islower(c))
			c = toupper(c);
		else if (isupper(c))
			c = tolower(c);

		printf("%c", c);
	}
	printf("\n");
	

	return (0);
}