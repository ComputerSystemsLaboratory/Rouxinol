#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const long MAX = 2000000;
const long INFTY (1<<30);

long H, A[MAX + 1];

void maxHeapify(long i){
	long l = 2 * i;
	long r = 2 * i + 1;

	long largest;
	if (l <= H && A[l] > A[i]){
		largest = l;
	}
	else {
		largest = i;
	}
	if (r <= H && A[r] > A[largest]){
		largest = r;
	}

	if (largest != i){
		swap(A[i], A[largest]);
		maxHeapify(largest);
	}
}

long extract(){
	long maxv;
	if (H < 1) return -INFTY;
	maxv = A[1];
	A[1] = A[H--];
	maxHeapify(1);
	return maxv;
}

void increaseKey(long i, long key){
	if (key < A[i]) return;
	A[i] = key;
	while (i > 1 && A[i / 2] < A[i]){
		swap(A[i], A[i / 2]);
		i /= 2;
	}
}

void insert(long key){
	H++;
	A[H] = -INFTY;
	increaseKey(H, key);
}

int main(){
	long key;
	string com;

	while (1){
		cin >> com;
		if (com[0] == 'e' && com[1] == 'n') break;
		if (com[0] == 'i'){
			cin >> key;
			insert(key);
		}
		else {
			cout << extract() << endl;
		}
	}

	return 0;
}