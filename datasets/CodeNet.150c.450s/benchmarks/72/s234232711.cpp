#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;


int main()
{
	char ch;

	while (true)
	{
		scanf("%c", &ch);

		if (ch == '\n') {
			break;
		}
		else if (islower(ch)) {
			printf("%c", toupper(ch));
		}
		else {
			printf("%c", tolower(ch));
		}
	}

	cout << endl;

    return 0;
}

