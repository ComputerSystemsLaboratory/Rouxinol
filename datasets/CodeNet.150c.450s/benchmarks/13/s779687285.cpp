#include<stdio.h>
#include<string.h>

int main(){
	char sa[101],p[100];
	char sb[200];
	scanf("%s",sa);
	scanf("%s",p);
	if(strstr(sa,p) !=NULL){
		printf("Yes\n");
	}else{
		strcpy(sb,sa);
		strcat(sb,sa);
		if(strstr(sb,p) != NULL){
			printf("Yes\n");
		}else{
			printf("No\n");
			}
	}
}