#include <stdio.h>

int main()
{
	int a[5000];
	int n;
	long int max;
	long int dummy;
	scanf("%d",&n);
	while(n != 0){
		for(int i = 0; i < n; i++){
			scanf("%d",&a[i]);
		}
		max = a[0];
		for(int i = 0; i < n; i++){
			dummy = 0;
			for(int j = i; j < n; j++){
				dummy += a[j];
				if(dummy > max){
					max = dummy;
				}
			}
		}
		printf("%ld\n",max);
		scanf("%d",&n);
	}
	return 0;
}