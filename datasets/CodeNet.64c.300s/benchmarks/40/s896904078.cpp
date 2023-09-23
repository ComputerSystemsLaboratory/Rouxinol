#include<stdio.h>
#include<ctype.h>
int main(){
	char a[1200];
	int i;
	while(1){
		scanf("%c",&a[i]);
		if(a[i]=='\n'){
			printf("\n");
			break;
		}
		if(isupper(a[i])){
			printf("%c",tolower(a[i]));
		}
		else if(islower(a[i])){
			printf("%c",toupper(a[i]));
		}
		else{
			printf("%c",a[i]);
		}
	}
	return 0;
}