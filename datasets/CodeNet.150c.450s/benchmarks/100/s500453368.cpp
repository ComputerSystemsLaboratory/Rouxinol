#include <stdio.h>

int main(){
	int n;
	int i;
	long long ans=1;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		ans = ans * (i+1);
	}
	printf("%lld\n", ans);
	return 0;

}