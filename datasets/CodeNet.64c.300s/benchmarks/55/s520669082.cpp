#include<stdio.h>

int main(){

	int i = 0, a[10000], j;

	while (1){
		scanf("%d", &a[i]);
		if(a[i] == 0){
			break;
		}
		printf("Case %d: %d\n",i + 1, a[i]);
		i++;
	}


	return 0;
}