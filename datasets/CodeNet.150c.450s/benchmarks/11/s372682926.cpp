#include <stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	
	int inNum[n];
	char inDraw[n];
	char e[] = {'S','H','C','D'};
	
	for(int i = 0; i < n; i++){
		scanf(" %c", &inDraw[i]);
		scanf("%d", &inNum[i]);
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 1; j <= 13; j++){
			int flag = 0;
			
			for(int k = 0; k < n; k++){
				//printf("inDraw[k] = %c e[i] = %c inNum[k] = %d j = %d\n",inDraw[k],e[i],inNum[k],j);
				if(inDraw[k]==e[i] && inNum[k] == j){
					flag = 1;
				}
			}
			
			if(flag == 0)
				printf("%c %d\n", e[i], j);
		}
	}
	
  return 0;
}