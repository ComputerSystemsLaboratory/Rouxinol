#include<stdio.h>
int main(void){
char word[1200];
	int i=0;
	fgets(word,1200,stdin);
	while(word[i]!='\0'&&word[i]!='\n'){
		if(word[i]>='A'&&word[i]<='Z'){
			word[i]+=0x20;
		}else if(word[i]>='a'&&word[i]<='z'){
			word[i]-=0x20;
		}
		i++;
	}
	for(i=0;word[i]!='\0';i++){
		printf("%c",word[i]);
	}
	return 0;
}