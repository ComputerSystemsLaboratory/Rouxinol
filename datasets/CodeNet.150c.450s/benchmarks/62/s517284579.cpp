#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int array[3];
	for (int i = 0; i < 3; i++)
		scanf("%d", &array[i]);
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]){
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	cout << array[0] << " " << array[1] << " " << array[2] << endl;
	return 0;
}


