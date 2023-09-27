#include<iostream>
#include<algorithm>
#define MAX 2000000
using namespace std;

int n;

int parent(int i);
int left(int i);
int right(int i);
void maxHeap(int node[], int i);
void buildMaxHeap(int node[]);
void insert(int node[], int k);
int extractMax(int node[]);

int main() {
	int k, node[MAX];
	char com[10];

	n = 0;

	while (1) {
		cin >> com;
		if (com[2] == 'd')break;
		else if (com[0] == 'e')cout << extractMax(node) << endl;
		else {
			cin >> k;
			insert(node, k);
		}
	}
	return 0;
}

int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return 2 * i + 1;
}

void maxHeap(int node[], int i) {
	int r, l, largest;

	if (left(i) <= n)l = left(i);
	else l = i;
	if (right(i) <= n)r = right(i);
	else r = i;
	
	if (node[l] < node[r])largest = r;
	else largest = l;

	if (node[largest] < node[i])largest = i;
	
	if (largest != i) {
		swap(node[i], node[largest]);
		maxHeap(node, largest);
	}
}

void buildMaxHeap(int node[]) {
	int i;
	for (i = n / 2; i > 0; i--)maxHeap(node, i);
}

void insert(int node[], int k){
	int i;
	node[++n] = k;
	i = n;
	while (i > 1 && node[i] > node[i / 2]) {
		swap(node[i], node[i / 2]);
		i /= 2;
	}
}

int extractMax(int node[]) {
	int max;
	max = node[1];
	node[1] = node[n--];
	maxHeap(node, 1);
	return max;
}