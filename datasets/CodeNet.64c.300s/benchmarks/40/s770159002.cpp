#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch,ch2;

	while (1){
		scanf("%c", &ch);
		if (islower(ch))ch2=toupper(ch);
		else if (isupper(ch))ch2=tolower(ch);
		else ch2 = ch;
		putchar(ch2);
		if (ch == '\n') break;
	}
	return 0;
}