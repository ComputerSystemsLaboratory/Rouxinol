#include<iostream>
using namespace std;

void insertionSort(int num[100], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] < num[j]) {
				int temp = num[i];
				for (int k = i; k > j; k--) {
					num[k] = num[k - 1];
				}
				num[j] = temp;
			}
		}
		for (int j = 0; j < N; j++) {
			cout << num[j];
			if (j != N - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main(void){
	int N, num[100];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	insertionSort(num, N);

	return 0;
}