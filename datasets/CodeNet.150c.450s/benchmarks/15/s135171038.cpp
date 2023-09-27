#include<iostream>
using namespace std;

bool linearSearch(int A[], int key, int size) {
	int i = 0;
	A[size] = key;
	while (A[i] != key) i++;
	return i != size;
}

int main() {
	int size, query, queryNum, count = 0;

	cin >> size;
	int* A = new int[size + 1];
	for (int i = 0; i < size; i++) scanf("%d", &A[i]); 
	
	cin >> queryNum;
	for (int i = 0; i < queryNum; i++) {
		scanf("%d", &query);
		if (linearSearch(A, query, size)) count++;
	}

	cout << count << endl;

	delete[] A;
}