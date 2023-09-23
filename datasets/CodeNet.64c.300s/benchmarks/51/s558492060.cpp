
#include<stdio.h>

int main(void){
	int n;
	
	scanf("%d",&n);
	
	long long ans = 1;
	for(int i=0; i<n; i++){
		ans = ans * (i+1);
	}
	
	printf("%lld\n",ans);
}