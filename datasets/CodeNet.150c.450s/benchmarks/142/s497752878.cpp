#include<stdio.h>

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n - k; i++){
		if(arr[i] < arr[i + k]){
			puts("Yes");
		}
		else{
			puts("No");
		}
	}
	return 0;
}