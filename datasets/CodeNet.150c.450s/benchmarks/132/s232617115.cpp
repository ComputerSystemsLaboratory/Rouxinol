#include<stdio.h>

int main(){
	int n,t=0,a[64],k,s,i,j;
	while(1){
		scanf("%d %d",&n,&s);
		if(n==0&&s==0)break;
		k=s;
		for(i=0;i<64;i++)a[i]=0;
		for(i=0;i<n;i=(i+1)%n){
			//for(j=0;j<n;j++)printf("%d ",a[j]);
			//printf("\n");
			if(k){
				a[i]++;
				k--;
			}else if(a[i]){
				k=a[i];
				a[i]=0;
			}
			for(t=0,j=0;j<n;j++)if(!a[j])t++;
			if(t==n-1&&a[i]==s)break;
		}
		printf("%d\n",i);
	}	
	return 0;
}