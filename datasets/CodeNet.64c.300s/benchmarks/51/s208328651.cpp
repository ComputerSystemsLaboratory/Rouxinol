#include<stdio.h>

int n;
long long output=1;

int main(){
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		output*=i;
	}
	printf("%lld\n",output);
	return 0;
}