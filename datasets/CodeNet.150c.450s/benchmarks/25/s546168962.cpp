#include<stdio.h>
#include<string.h>

int main(){
	char moji[2][27]={"abcdefghijklmnopqrstuvwxyz","ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char uketori[1202];
	int i,j,mojisuu,count[26]={0};
	while(fgets(uketori,sizeof(uketori),stdin)!=NULL){
		mojisuu=strlen(uketori);
		
		for(i=0;i<mojisuu;i++){
			for(j=0;j<26;j++){
				if(uketori[i]==moji[0][j]){
					count[j]++;
				}else if(uketori[i]==moji[1][j]){
					count[j]++;
				}
				
			}
			
		}
		
		
	}
	
	
	for(i=0;i<26;i++){
		printf("%c : %d\n",moji[0][i],count[i]);
	}
	
	return 0;
}