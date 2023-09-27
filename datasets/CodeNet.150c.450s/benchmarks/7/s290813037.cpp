#include <iostream>
using namespace std;

int main()
{
	int array[10];
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	for (int j = 9; j != 6; j--) {
		for (int i = 0; i < j; i++) {
			if (array[i] > array[i+1]) {
				int spare = array[i];
				array[i] = array[i+1];
				array[i+1] = spare;
			}
		}
		cout << array[j] << endl;
	}
}