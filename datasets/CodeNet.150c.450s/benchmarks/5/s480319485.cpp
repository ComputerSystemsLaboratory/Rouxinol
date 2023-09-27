#include <stdio.h>


int main(void){
	int i,n;
	int arr[100]={0};
	
	scanf("%d", &n);
	
	for(i = 0; i<n ; i++){
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < (n/2) ; i++){
		int temp    = arr[i];
		arr[i]      = arr[(n-1) - i];
		arr[(n-1)-i]= temp;
	}
	
	for (i = 0; i < n; i++){
		if ( i ) {
			printf(" ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");
    return 0;
}