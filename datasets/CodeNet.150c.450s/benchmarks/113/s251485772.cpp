#include <stdio.h>
#pragma warning(disable : 4996)

int main(){

	int i, a;

	for (i = 1; 1; i++){
		scanf("%d", &a);
		if (a == 0){
			break;
		}
		printf("Case %d: %d\n", i, a);
	}

	return 0;
}