#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//ITP1-8-A

int main(){
	char ch;
	while(1){
		scanf("%c",&ch);
		if('a'<=ch && ch<='z'){
			ch+='A'-'a';
		}else if('A'<=ch && ch<='Z'){
			ch+='a'-'A';
		}
		printf("%c",ch);
		if(ch=='\n') break;
	}
	return 0;
}