#include<stdio.h>

int main(void)
{
	int point[4];
	int i;
	int sum[2],max=0;
	
	sum[0]=0;
	sum[1]=0;

	for (i=0;i<2;i++) {
		scanf("%d %d %d %d",&point[0],&point[1],&point[2],&point[3]);
		sum[i]+=point[0]+point[1]+point[2]+point[3];
		if(max < sum[i]) {
			max=sum[i];
		}
	}

	printf("%d\n",max);

	return 0;
}