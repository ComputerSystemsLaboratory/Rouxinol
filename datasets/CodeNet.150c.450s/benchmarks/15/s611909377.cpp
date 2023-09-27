#include <stdlib.h>
#include <iostream>
using namespace std;

bool linear_search(int *array, int size, int num);
void print_array(int *array, int size);
int main(){
	int s_num;
	int t_num;

	cin >> s_num;

	int* array_s = (int*)malloc(s_num * sizeof(int));

	for(int i = 0; i < s_num; ++i){
		cin >> array_s[i];
	}

	cin >> t_num;

	int* array_t = (int*)malloc(t_num * sizeof(int));

	for(int i = 0; i < t_num; ++i){
		cin >> array_t[i];
	}
	int result_max_num = s_num;
	if(t_num < s_num) result_max_num = t_num;
	int result_size = 0;

	for(int i = 0; i < t_num; ++i){
		if(linear_search(array_s, s_num, array_t[i])){
			++result_size;
		}
	}

	cout << result_size << endl;
	return 0;
}

bool linear_search(int *array, int size, int num){
	for(int i = 0; i < size; ++i){
		if(array[i] == num){
			return true;
		}
	}
	return false;
}