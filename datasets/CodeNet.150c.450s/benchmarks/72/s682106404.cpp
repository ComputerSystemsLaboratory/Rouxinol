#include <stdio.h>
#include <cctype>
using namespace std;

int main(void){
	char ch = ' ';

	while(true){
		scanf("%c", &ch);

		if (islower(ch)) printf("%c",(char)toupper(ch));
		else if (isupper(ch))  printf("%c", (char)tolower(ch));
		else  printf("%c", ch);

		if (ch == '\n')	break;
	}

	return 0;
}