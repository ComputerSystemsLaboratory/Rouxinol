#include<stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int lt[n];
	for(int i=0; i<n; i++){
		scanf("%d", &lt[i]);
	}
	int c = n - k;
	for(int i=0; i<c; i++){
		if(lt[i]<lt[i+k]){
			puts("Yes");
		}
		else{
			puts("No");
		}
	}
	return 0;
}