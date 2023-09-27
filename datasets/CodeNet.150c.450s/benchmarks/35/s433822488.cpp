#include<stdio.h>

int main(){
	long int n,a[5000],b[5000],i,j,max;
	
	while(0<=scanf("%ld",&n)){
		if(n==0)break;
		max=-2147483647;
		for(i=0;i<n;i++){
			scanf("%ld",&a[i]);
			if(max<a[i])max=a[i];
		}
		b[0]=a[0];
		for(i=1;i<n;i++){
			b[i]=b[i-1]+a[i];
			if(b[i]>max)max=b[i];
		}
		
		for(i=1;i<n;i++){
			for(j=i;j<n;j++){
				if(max<b[j]-b[i-1])max=b[j]-b[i-1];
			}
		}
		
		printf("%ld\n",max);
	}
	return 0;
}