#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,i,j,ret;
	while(scanf("%d",&a), a){
		ret = 0;
		for(i = 2;i <= 500;i++){
			if ((a << 1) <= i * i)
				break;
			if (!((a << 1) % i) && (((a << 1) / i + i) & 1))
				ret++;
		}
		printf("%d\n",ret);
	}
	return 0;
}