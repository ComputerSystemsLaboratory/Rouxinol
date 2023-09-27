#include <iostream>
#include <string>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)


int H, i, A[MAX + 1];

int parent(int i) 
{
	return i / 2;
}

int left(int i)
{
	return i * 2;
}

int right(int i)
{
	return i * 2 + 1;
}

void maxHeapify(int i) {
	int l, r, largest;
	l = left(i);
	r = right(i);

	if (l <= H && A[l] > A[i]) {
		largest = l;
	}
	else {
		largest = i;
	}

	if (r <= H && A[r] > A[largest]) {
		largest = r;
	}

	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(largest);
	}

}

int extract()
{
	int maxv;

	if (H < 1) {
		return -INFTY;
	}
	maxv = A[1];
	A[1] = A[H--];
	maxHeapify(1);
	return maxv;

}

void increaseKey(int i, int key) 
{
	if (key < A[i]) {
		return;
	}
	A[i] = key;
	while (i > 1 && A[i / 2] < A[i]) 
	{
		swap(A[i],A[i/2]);
		i = i / 2;
	}
}

void insert(int key) {
	H++;
	A[H] = -INFTY;
	increaseKey(H, key);
}

int main(void)
{
	int key;
	string command;

	while (1) {
		cin >> command;

		if (command == "insert") {
			cin >> key;
			insert(key);
		}
		else if (command == "extract") {
			cout << extract() << endl;
		}
		else if (command == "end") {
			break;
		}

	}


	return 0;
}