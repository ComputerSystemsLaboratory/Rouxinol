#include <stdio.h>

int main(){
	int n,j, i=0;
	int set[12000] = { 0};
	while (1){
		scanf("%d", &set[i]);
		
		if (set[i] == 0){
			break;
		}
		i++;
	}
	for (j = 0; j < i; j++){
		printf("Case %d: %d\n", j+1, set[j]);

	}
	return 0;
}