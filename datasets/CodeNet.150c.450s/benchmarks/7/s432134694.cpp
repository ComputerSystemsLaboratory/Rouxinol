#include <stdio.h>
int main()
{
	int high[10];
	for(int i=0;i<10;i++)
		scanf("%d",&high[i]);
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(high[i]<high[j]){
				int a=high[i];
				high[i]=high[j];
				high[j]=a;
			}
		}
	}
	for(int i=0;i<3;i++)
		printf("%d\n",high[i]);
	return 0;
}