#include <stdio.h>
int main(){
	
	int n;
	int uni[4][3][10]={0};
	int b, f, r, v;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &b);
		scanf("%d", &f);
		scanf("%d", &r);
		scanf("%d", &v);
		
		uni[b-1][f-1][r-1] += v;
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				printf(" %d",uni[i][j][k]);
			}
			printf("\n");
		}
		if(i != 3)
		printf("####################\n");
	}
  return 0;
}