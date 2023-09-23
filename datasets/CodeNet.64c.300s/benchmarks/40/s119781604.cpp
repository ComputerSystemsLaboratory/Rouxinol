#include <stdio.h>
using namespace std;

int main() {
	char str[1200];
	int i = 0;
	for (; i < 1200; i++) 
	{
		char in;
		scanf("%c", &in);
		if (in == '\n')
			break;
		
		if (in >= 'A'&&in <= 'Z')
			str[i] = in + 32;
		else if (in >= 'a'&&in <= 'z')
			str[i] = in - 32;
		else
			str[i] = in;
		printf("%c", str[i]);
	}
	putchar('\n');
	return 0;
}