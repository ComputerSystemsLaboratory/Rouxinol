#include<stdio.h>
int main()
{
	int i,j,max,temp;
	int ya[10];
	
	for(i=0;i<10;i++)scanf("%d",&ya[i]);
	for(i=0;i<10;i++){
		max=i;
		for(j=i+1;j<10;j++){
			if(ya[max]<ya[j]){
				temp=ya[max];
				ya[max]=ya[j];
				ya[j]=temp;
			}
		}
	}
		for(i=0;i<3;i++)printf("%d\n",ya[i]);
		return 0;
	
}