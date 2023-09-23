#include <stdio.h>
int main()
{
	long n,a[10000],min=1000000,max=-1000000,sum=0;
	scanf("%ld",&n);
	for(int i=0;i<n;i++)
		scanf("%ld",&a[i]);
	for(int i=0;i<n;i++){
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
		sum=sum+a[i];
	}
	printf("%ld %ld %ld\n",min,max,sum);
	return 0;
}