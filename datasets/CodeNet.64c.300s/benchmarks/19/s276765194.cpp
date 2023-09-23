#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>
#include<limits.h>

int main(){
	int n,num[10000],max;
	int hantei[10000]={0};
	int i,j,k=0;
	
	while(1){
	scanf("%d",&n);
		if(n==0)break;
		
	for(i=0;i<n;i++)scanf("%d",&num[i]);
		max=num[0];
		
	for(i=0;i<n;i++){
		hantei[0]=num[i];
		for(j=i+1,k=0;j<n;j++,k++){
			hantei[k+1]=num[j]+hantei[k];
		}
		for(j=0;j<n;j++)if(max<hantei[j])max=hantei[j];
	}
	
	printf("%d\n",max);
	}
return 0;
}