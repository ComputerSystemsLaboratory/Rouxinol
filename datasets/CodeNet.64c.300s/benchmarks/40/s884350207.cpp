#include<ctype.h>
#include<stdio.h>

int main(void)
{
	char c;
	
	while(1){
		if(c=='\n') break;
		
		scanf("%c",&c);
		
		if(islower(c)){
			c=toupper(c);
		}
		else c=tolower(c);
		
		printf("%c",c);
	}
	return 0;
}