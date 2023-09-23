#include <stdlib.h>
#include <iostream>
using namespace std;

int bubble_sort(int *array, int currentNum);
void print_array(int *array, int size);
int main(){
	int n;

	cin >> n;

	int* array = (int*)malloc(n * sizeof(int));
	int result = 0;

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	result = bubble_sort(array, n);
	print_array(array, n);
	cout << result <<endl;
	return 0;
}

int bubble_sort(int *array, int n){
	int swapNum = 0;

	for(int i = n-1; i > 0; --i){
		bool isSwaped = false;
		for(int j = 0; j < i; ++j){
			if(array[j] > array[j+1]){
				swap(array[j], array[j+1]);
				++swapNum;
				isSwaped = true;
			}
		}
		if(!isSwaped){
			return swapNum;
		}
	}
	return swapNum;
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