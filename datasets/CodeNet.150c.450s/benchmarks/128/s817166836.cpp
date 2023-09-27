#include<stdio.h>
#include<string.h>
int main(){
	int l;
	char s[32],r[32];
	scanf("%s",s);
	l=strlen(s);
	for(int i=0;i<l;i++){
		r[l-i-1]=s[i];
	}
	for(int i=0;i<l;i++){
		printf("%c",r[i]);
	}
	printf("\n");
	return 0;
}