#include<stdio.h>
int main(void)
{
	int i,j;
	int a[28];
	for(i=0;i<28;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<31;i++){
		for(j=0;j<28;j++){
			if(i==a[j]){
				break;
			}
			else if(i!=a[j]&&j==27){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
