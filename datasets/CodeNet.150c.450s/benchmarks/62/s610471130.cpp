#include <iostream>
using namespace std;
const int NUM = 3;
int main(void) {
	int array[NUM];
	cin >> array[0] >> array[1] >> array[2];
	for (int i = 0; i < NUM; i++) {
		for (int j = 1; j < NUM; j++) {
			if (array[j-1] > array[j]) {
				int temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << array[0] << " " << array[1] << " " << array [2] << endl;
	return 0;
}