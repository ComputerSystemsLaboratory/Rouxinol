#include<iostream>

using namespace std;


void InsertionSort(int*Array, const int Num) {
	for (int i = 1; i < Num; i++) {
		//Sort
		int tmp = *(Array + i);
		int j;
		for (j = i - 1; j >= 0 && *(Array + j) > tmp; j--) {
			*(Array + j + 1) = *(Array + j);
		}
		*(Array + j + 1) = tmp;


		//Display
		cout << *Array;
		for (int j = 1; j < Num; j++)cout << " " << *(Array + j);
		cout << endl;
	}
}

int main() {
	int Num;
	int Array[101];

	//Input
	cin >> Num;
	for (int i = 0; i < Num; i++)cin >> Array[i];

	cout << Array[0];
	for (int i = 1; i < Num; i++)cout << " " << Array[i];
	cout << endl;

	InsertionSort(Array, Num);

	return 0;
}