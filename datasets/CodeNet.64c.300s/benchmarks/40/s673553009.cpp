#include<stdio.h>
#include<string.h>

int main(){
	char str[1201];
	char komoji[27]="abcdefghijklmnopqrstuvwxyz";
	char oomoji[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int mojisuu,i,j;
	
	fgets(str,sizeof(str),stdin);
	mojisuu=(int)strlen(str);
	
	for(i=0;i<mojisuu;i++){
		for(j=0;j<26;j++){
			if(str[i]==komoji[j]){
				str[i]=oomoji[j];
				break;
			}else if(str[i]==oomoji[j]){
				str[i]=komoji[j];
				break;
			}
			
		}
		printf("%c",str[i]);
	}
	
	//printf("\n");
	return 0;
}