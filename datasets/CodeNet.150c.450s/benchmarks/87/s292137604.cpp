#include <stdio.h>

int a[5][10];

void arrange(void)
{
	int i,j;
	for(i = 0;i < 5;i++){
		for(j = 0;j < 9;j++){
			if(a[i][j + 1] == 0 && a[i][j] != 0){
				a[i][j + 1] = a[i][j];
				a[i][j] = 0;
				j = -1;
			}
		}
	}
	return;
}

int delblock(void)
{
	int i,j,ret = 0;
	for(j = 0;j < 10;j++){
		for(i = 0;i < 3;i++){
			if(a[i][j] != 0 && a[i][j] == a[i + 1][j] && a[i][j] == a[i + 2][j]){
				if(i + 3 < 5 && a[i][j] == a[i + 3][j]){
					if(i + 4 < 5 && a[i][j] == a[i + 4][j]){
						a[i + 4][j] = 0;
					}
					a[i + 3][j] = 0;
				}
				a[i][j] = a[i + 1][j] = a[i + 2][j] = 0;
				ret = 1;
			}
		}
	}
	return ret;
}

int main(void)
{
	int H,i,j,sum,afsum;
	while(1)
	{
		for(j = 0;j< 10;j++)
			for(i = 0;i < 5;i++)
				a[i][j] = 0;
		sum = afsum = 0;
		scanf("%d",&H);
		if(H == 0)
			break;
		for(j = 10 - H;j< 10;j++){
			for(i = 0;i < 5;i++){
				scanf("%d",&a[i][j]);
				sum += a[i][j];
			}
		}
		while(delblock()){
			arrange();
		}
		for(j = 0;j< 10;j++)
			for(i = 0;i < 5;i++)
				afsum += a[i][j];
		printf("%d\n",sum - afsum);
	}
	return 0;
}