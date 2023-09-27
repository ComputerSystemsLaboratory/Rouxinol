#include<stdio.h>
int main(void){
	int i;
	
	
	int n;
	scanf("%d",&n);
	
	int d=100000;
	
	for(i=0;i<n;i++){
		d+=d/20;
		
		if(d%1000!=0){
			d=d/1000*1000+1000;
		}
	}
	
	printf("%d\n",d);
	
	return 0;
}