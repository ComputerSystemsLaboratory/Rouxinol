#include <stdio.h>
int main(void){
	int x = 1;

	for (int i = 1; x != 0; i++){
		scanf("%d", &x);
		if (x != 0) printf("Case %d: %d\n", i, x);
	}
}