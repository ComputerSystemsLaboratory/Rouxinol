#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int N;
	int A[1000];
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> A[i];
	}
	for (int i = 0;i < N;i++) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j]>v) {
			A[j + 1] = A[j];
			j--;
			A[j + 1] = v;
		}
		for (int i = 0;i < N-1;i++) {
			cout << A[i] << ' ' ;
		}
		cout << A[N-1];
		cout << endl;

	}

}