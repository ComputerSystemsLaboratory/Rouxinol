#include <stdlib.h>
#include <iostream>
#include <climits>
using namespace std;

long merge_sort(int *array, int left, int right);
long merge(int *array, int left, int mid, int right);
int main(){
	int n;

	cin >> n;

	int* array = (int*)malloc(n * sizeof(int));
	long result = 0;

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		cin >> array[i];
	}

	result = merge_sort(array, 0, n);
	cout << result <<endl;
	return 0;
}

long merge_sort(int *array, int left, int right){
	long swap_num = 0;
	if(left+1 < right){
		int mid = (left + right) >> 1;
		swap_num += merge_sort(array, mid, right);
		swap_num += merge_sort(array, left, mid);
		swap_num += merge(array, left, mid, right);
	}

	return swap_num;
}

long merge(int *array, int left, int mid, int right){
	long swap_num = 0;
	int n1 = mid - left;
	int n2 = right - mid;

	int* L = (int*)malloc((n1+1) * sizeof(int));
	int* R = (int*)malloc((n2+1) * sizeof(int));

	for(int i = 0; i < n1; ++i){
		L[i] = array[left + i];
	}
	L[n1] = INT_MAX;
	for(int i = 0; i < n2; ++i){
		R[i] = array[mid + i];
	}
	R[n2] = INT_MAX;

	int i = 0;
	int j = 0;
	for(int k = left; k < right; ++k){
		if(L[i] <= R[j]){
			array[k] = L[i];
			++i;
		}else{
			array[k] = R[j];
			swap_num += mid + j - k;
			++j;
		}
	}
	return swap_num;
}