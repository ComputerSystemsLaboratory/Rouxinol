#include<stdio.h>

int temp[200005];
long long count = 0 ;

void mergeSort(int *arr, int left, int right){
	if(left == right) return;
	if(left >= right) return;
	int mid = (left+right)/2;
	
	mergeSort(arr, left, mid);
	mergeSort(arr, mid+1, right);
	
	int x = left;	
	int n = mid;
	
	int y = mid+1;
	int m = right;
	
	int i = left;
	while(x <=n && y <= m){
		if(arr[x] <= arr[y]){
			temp[i++] = arr[x++];
		}
		else{
			count += (n+1)-x;
//			printf("-->%d %d %d<--\n", n, x ,count);
			temp[i++] = arr[y++];
		}
	}
	
	while(x <= n){
		temp[i++] = arr[x++];
	}
	while(y <= m){
		temp[i++] = arr[y++];
	}
	
	for(int j = left; j<=right; j++){
		arr[j] = temp[j];
	}
}

int main(){
	int n;
	int arr[200005];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	mergeSort(arr, 0, n-1);
	printf("%lld\n", count);
	
	return 0;
}

