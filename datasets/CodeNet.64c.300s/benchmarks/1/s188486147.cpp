#include<iostream>
using namespace std;

int Partition(int A[], int st, int en) {
	int key = A[en];
	int smallPoint = st - 1;
	for (int i = 0; i < en; i++) {
		if (A[i] <= key) {
			smallPoint++;
			swap(A[smallPoint], A[i]);
		}
	}
	smallPoint++;
	swap(A[smallPoint], A[en]);
	return smallPoint;
}

int main() {
	int A[100000];
	int numA;
	cin >> numA;
	for (int i = 0; i < numA; i++) {
		cin >> A[i];
	}

	int key = Partition(A, 0, numA-1);

	for (int i = 0; i < numA; i++) {
		if (i) cout << " ";
		if (i == key) cout << "[";
		cout << A[i];
		if (i == key) cout << "]";
	}
	cout << endl;;
	return 0;
}