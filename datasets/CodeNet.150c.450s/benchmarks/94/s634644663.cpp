#include<iostream>

using namespace std;


int BubbleSort(int*Array, const int Num) {
	bool loop = false;
	int SortNum = 0;

	do {
		loop = false;

		for (int i = 1; i < Num; i++) {
			if (*(Array + i - 1) > *(Array + i)) {
				int tmp = *(Array + i - 1);
				*(Array + i - 1) = *(Array + i);
				*(Array + i) = tmp;
				loop = true;
				SortNum++;
			}
		}
	} while (loop);

	return SortNum;
}

int main() {
	int N;
	int Array[200000];
	int SortNum;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Array[i];
	}

	SortNum = BubbleSort(Array, N);

	cout << Array[0];
	for (int i = 1; i < N; i++)cout << " " << Array[i];
	cout << endl;
	cout << SortNum << endl;

	return 0;
}