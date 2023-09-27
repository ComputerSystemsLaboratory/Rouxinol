#include<stdio.h>
int i,j,a,b,c[20],d[50001],min=2000000000;
int main(void)
{
	
	scanf("%d %d",&a,&b);
	for(i=0;i<b;i++){
		scanf("%d",&c[i]);
	}
	for(j=0;j<=a;j++){
		d[j]=min;
	}
	d[0]=0;
	for(i=0;i<b;i++){
		for(j=0;j<=a;j++){
			if(d[j]!=min && j+c[i]<=a){
				if(d[j]+1<d[j+c[i]]){
					d[j+c[i]]=d[j]+1;
				}
			}
		}
	}
	printf("%d\n",d[a]);
	return 0;
}