#include <stdio.h>
int main(){
	int n,k;
	scanf("%d %d", &n,&k);
	int nilai[n];
	for(int i=0;i<n;i++){
		scanf("%d", &nilai[i]);
	}
	for(int j=0;j<n-k;j++){
		(nilai[j]<nilai[k+j])?puts("Yes"):puts("No");
	}
	return 0;
}