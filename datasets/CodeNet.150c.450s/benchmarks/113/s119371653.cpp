#include <stdio.h>

int main(){
	int x,i=1;
	while (true){
		scanf("%d", &x);
		if (x == 0)break;
		printf("Case %d: %d\n",i, x);
		i++;
	}
	return 0;
}