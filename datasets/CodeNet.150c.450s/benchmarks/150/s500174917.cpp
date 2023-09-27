#include <stdlib.h>
#include <iostream>
using namespace std;

void counting_sort(int *array, int *output, int n, int k);
void print_array(int *array, int size);
int main(){
	int n;

	cin >> n;

	int* array = (int*)malloc(n * sizeof(int));
	int* output = (int*)malloc(n * sizeof(int));
	int k = 0;

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		cin >> array[i];
		if(array[i] > k) k = array[i];
	}
	counting_sort(array, output, n, k);
	print_array(output, n);
	return 0;
}
void counting_sort(int *array, int *output, int n, int k){
	int *c = (int *)calloc(k, sizeof(int));
	for(int i = 0; i < n; ++i){
		++c[array[i]];
	}
	for(int i = 1; i <= k; ++i){
		c[i] += c[i-1];
	}
	for(int j = n-1; j >= 0; --j){
		output[c[array[j]]-1] = array[j];
		c[array[j]]--;
	}

}


void print_array(int *array, int size){
	for(int i = 0; i < size; i++){
		cout <<  array[i];
		if(i != size - 1){
		cout << " " ;
		}
	}
	cout << endl;
}