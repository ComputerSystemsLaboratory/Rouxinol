#include <stdlib.h>
#include <iostream>
using namespace std;

void insertion_sort(int *array, int currentNum);
void print_array(int *array, int size);
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
	for(int i = 0; i < n; i++){
		insertion_sort(array, i);
		print_array(array, n);
	}
	return 0;
}

void insertion_sort(int *array, int currentNum){
	for(int i = 0; i < currentNum; i++){
		if(array[i] > array[currentNum]){
			swap(array[i], array[currentNum]);
		}
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