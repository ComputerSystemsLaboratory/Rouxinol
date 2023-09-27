#include <stdio.h>

int main(void){
int n=0,m=0;
	while(scanf("%d",&n),n){
		char change[100][2];
		char s;
		for(int i=0;i<n;i++)
			scanf(" %c %c", &change[i][0], &change[i][1]);
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf(" %c", &s);
			for(int k=0;k<n;k++){
				if(s==change[k][0]){
						s=change[k][1];
						break;
				}	
			}
			printf("%c", s);
		}
		printf("\n");
	}
	return 0;
}