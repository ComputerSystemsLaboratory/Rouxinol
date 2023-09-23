#include<stdio.h>
int main(void)
{
	int array1[100][100],i,j,r,c;
	static int array2[100],a=0;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&array1[j][i]);
			array2[j]+=array1[j][i];
		}
	}
		for(i=0;i<=r;i++){
			for(j=0;j<=c;j++){
				if(i<r){
					if(j<c){
						printf("%d ",array1[j][i]);
						a+=array1[j][i];
					}else{
						printf("%d\n",a);
						a=0;
					}
				}else{
					if(j<c){
						printf("%d ",array2[j]);
						a+=array2[j];
					}else{
						printf("%d\n",a);
					}
				}
			}
		}
		return 0;
	}