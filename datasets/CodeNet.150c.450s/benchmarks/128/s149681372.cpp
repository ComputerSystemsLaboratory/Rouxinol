#include<stdio.h>
int main(){
	char str[21];
	int i,j;
	scanf("%s",str);
	
	for(i = 0; str[i] != '\0'; i++){
	}
	
	for(j = i-1; j > -1; j--){
		printf("%c",str[j]);
	}
	
	puts("");
	
	return 0;
}