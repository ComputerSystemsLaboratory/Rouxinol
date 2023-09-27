#include<iostream>
using namespace std;

const int SIZE = 10;

int Sort(int A[], int N, int name) {
	int j, i, v;

	for (i = 1; i < N; i++) {
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
	}
	return A[name];
}

int main(){
	int Height[10];
	int sort[3];

	for (int i = 0; i < SIZE; i++) {
		cin >> Height[i];
		if (Height[i] > 10000) {
			Height[i] = 0;
			i--;
		}
	}

	sort[0] = Sort(Height, SIZE, 9);
	sort[1] = Sort(Height, SIZE, 8);
	sort[2] = Sort(Height, SIZE, 7);
	
	cout <<  sort[0] << endl;
	cout <<  sort[1] << endl;
	cout <<  sort[2] << endl;

	return 0;
}