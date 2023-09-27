#include <stdio.h>
int main(){
	int n,s,sum,i,max,min,ave;
	
	while(1){
		sum=0;
		max=0;
		min=1000;
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++){
			scanf("%d",&s);
			sum+=s;
			if(s>max)max=s;
			if(s<min)min=s;
		}
		ave=(sum-(max+min))/(n-2);
		printf("%d\n",ave);
	}
	return 0;
}