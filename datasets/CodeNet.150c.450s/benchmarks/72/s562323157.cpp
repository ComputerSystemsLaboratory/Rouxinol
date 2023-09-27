#include <stdio.h>

int main(){
	char ch;
	while((ch = getchar()) != EOF){
			if(ch >= 97 && ch <= 122)
				printf("%c",ch-32);
			else if(ch >= 65 && ch <= 90)
				printf("%c",ch+32);
			else
				printf("%c",ch);
	}
}

