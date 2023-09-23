#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char ch;
	while(1){
		scanf("%c",&ch);
		if(islower(ch)){
			ch=toupper(ch);
		}
		else if(isupper(ch)){
			ch=tolower(ch);
		}
		printf("%c",ch);
		if(ch=='\n') break;
	}
	return 0;
}