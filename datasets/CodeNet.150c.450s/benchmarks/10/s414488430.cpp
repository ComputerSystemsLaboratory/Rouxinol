#include <stdio.h>

int main(){
	int house[4][3][10] = { 0 };
	int n,b,f,r,v;
	int i,j,k;

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d %d %d %d", &b, &f, &r, &v);
		house[b - 1][f - 1][r - 1]+=v;

	}

	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			for (k = 0; k < 10; k++){
				
					printf(" %d", house[i][j][k]);
			
				
			}
			printf("\n");
		}
		if (i != 3){
			printf("####################\n");
		}
	}
	return 0;
}