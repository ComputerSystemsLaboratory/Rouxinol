#include<stdio.h>

long long count = 0;
int arr[500005];
int tempArr[500005];
void mergeSort(int l, int r){
	if(l == r) return;
	
	int mid = (l + r)/2;
	
	mergeSort(l, mid);
	mergeSort(mid + 1, r);
	
	int idx = l;
	int leftIdx = l;
	int toLeft = mid;
	int rightIdx = mid + 1;
	int toRight = r;
	
	while(leftIdx <= toLeft && rightIdx <= toRight){
		if(arr[leftIdx] < arr[rightIdx]){
			tempArr[idx++] = arr[leftIdx++];
		}
		else{
			tempArr[idx++] = arr[rightIdx++];
			count += (mid + 1) - leftIdx;
		}
	}
	
	while(leftIdx <= toLeft){
		tempArr[idx++] = arr[leftIdx++];
	}
	while(rightIdx <= toRight){
		tempArr[idx++] = arr[rightIdx++];
	}
	
	for(int i = l; i<=r; i++){
		arr[i] = tempArr[i];
	}
	
}

int main(){
	
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	mergeSort(0, n-1);
	
	printf("%lld\n", count);
	
	return 0;
}
