#include <stdio.h>

int main(void){
	int n, a, b, c, x, y, count, i, j;
	while(1){
		scanf("%d%d%d%d%d",&n,&a,&b,&c,&x);
		if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0)
			break;
		count = 0;
		for(i = 0;i < n;i++){
			scanf("%d",&y);
			while(x != y && count <= 10000){
				x = (a * x + b) % c;
				count++;
			}
			if(i != n - 1){
				x = (a * x + b) % c;
				count++;
			}
		}
		if(count > 10000)
			printf("-1\n");
		else
			printf("%d\n",count);
	}
	return 0;
}