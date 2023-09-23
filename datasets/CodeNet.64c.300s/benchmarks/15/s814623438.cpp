#include <stdlib.h>
#include <iostream>
using namespace std;

int selection_sort(int *array, int n);
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
	int result = selection_sort(array, n);
	print_array(array, n);
	cout << result <<endl;
	return 0;
}

int selection_sort(int *array, int n){
	int change_num = 0;
	for(int i = 0; i < n; ++i){
		bool is_swaped = false;
		int minj = i;
		for(int j = i; j < n; ++j){
			if(array[j] < array[minj]){
				minj = j;
				is_swaped = true;
			}
		}
		if(is_swaped){
			swap(array[i], array[minj]);
			++change_num;
		}
	}
	return change_num;
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