#include <stdio.h>
#include <ctype.h>
int main(){
	int i;
	char s[1200];
	scanf("%[^\n]",s);

	for(i=0;s[i]!='\0';i++){
		if(isupper(s[i]))s[i]=tolower(s[i]);
		else s[i]=toupper(s[i]);
	}
	printf("%s\n",s);
}