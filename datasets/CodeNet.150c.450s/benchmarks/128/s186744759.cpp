#include<stdio.h>
#include<string.h>

int main(){
	char str[21],reverse[21];
	int num,i;
	num=scanf("%21s",str);
	
	
	num=strlen(str)-1;
	
	for(i=0;i<=num;i++){
		reverse[i]=str[num-i];
	}
	
	reverse[i]='\0';
	
	printf("%s\n",reverse);
	
	return 0;
}