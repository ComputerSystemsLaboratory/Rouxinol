#include <stdlib.h>
#include <iostream>
#include <climits>
using namespace std;

int partition(int *array, int left, int right, int pivot_pos);
void swap(int *a, int *b);
void print_array(int *array, int left, int right);
int main(){
	int n;

	cin >> n;

	int* array = (int*)malloc(n * sizeof(int));

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	int pos = partition(array, 0, n, n-1);
	print_array(array, 0, pos);
	cout << " [" << array[pos] << "] ";
	print_array(array, pos+1, n);
	cout <<  endl;
	return 0;
}
int partition(int *array, int left, int right, int pivot_pos){
	int x = array[pivot_pos];
	int i = left - 1;
	for(int j = left; j < right-1; ++j){
		if(array[j] <= x){
			++i;
			swap(array[i], array[j]);
		}
	}
	swap(array[i+1], array[pivot_pos]);
	return i+1;
}

void swap(int *a, int *b){
	int temp = *b;
	*b = *a;
	*a = temp;
}

void print_array(int *array, int left, int right){
	for(int i = left; i < right; i++){
		cout <<  array[i];
		if(i != right - 1){
		cout << " " ;
		}
	}
}