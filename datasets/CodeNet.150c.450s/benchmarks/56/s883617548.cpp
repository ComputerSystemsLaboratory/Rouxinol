#include <stdio.h>
#include <math.h>

int main(){
	int n,a,MIN=1000000,MAX=-1000000;
	long long sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a<MIN) MIN=a;
		if(a>MAX) MAX=a;
		sum+=a;
	}
	printf("%d %d %lld\n",MIN,MAX,sum);
	return 0;
}