#include <stdio.h>
int main (){
	int n, k;
	scanf ("%d %d\n", &n, &k);
	int arr[n];
		for (int A=0;A<n;A++ ){
			scanf("%d", &arr[A]);
		}
		for (int j=0;j<n-k;j++){
			if(arr[j]<arr[j+k]){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}

	
	return 0;
}