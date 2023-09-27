#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char kata[1300];
	scanf("%[^\n]", kata);
	int len = strlen(kata);
//	printf("%d", len);
	for(int i=0; i<len; i++){
		if(isupper(kata[i])) kata[i]=tolower(kata[i]);
		else if(islower(kata[i])) kata[i]=toupper(kata[i]);
	}
		printf("%s\n", kata);
}
