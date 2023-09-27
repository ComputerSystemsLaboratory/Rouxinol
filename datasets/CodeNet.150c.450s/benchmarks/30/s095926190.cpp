#include<iostream>

using namespace std;


int SelectionSort(int*Array, const int Num) {
	int SortNum = 0;

	for (int i = 0; i < Num; i++) {
		int minj = i;
		int tmp = *(Array + i);

		for (int j = i; j < Num; j++) {
			if (*(Array + j) < *(Array + minj))minj = j;
		}

		if (i < minj) {
			*(Array + i) = *(Array + minj);
			*(Array + minj) = tmp;
			SortNum++;
		}
	}

	return SortNum;
}

int main() {
	int N;
	int Array[100];
	int SortNum;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Array[i];
	}

	SortNum = SelectionSort(Array, N);

	cout << Array[0];
	for (int i = 1; i < N; i++)cout << " " << Array[i];
	cout << endl;
	cout << SortNum << endl;

	return 0;
}