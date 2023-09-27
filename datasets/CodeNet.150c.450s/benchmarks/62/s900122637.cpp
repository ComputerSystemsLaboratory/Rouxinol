#include<stdio.h>

int main(){
	int n[4],i,j;
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	for (i = 0; i < 3; i++){
		for (j = i + 1; j < 3; j++){
			if (n[i] > n[j]){
				n[3] = n[i];
				n[i] = n[j];
				n[j] = n[3];
			}
		}
	}

	printf("%d %d %d\n", n[0], n[1], n[2]);
	return 0;
}