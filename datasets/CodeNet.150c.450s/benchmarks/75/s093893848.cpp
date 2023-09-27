#include<iostream>
#include<algorithm>
using namespace std;

int n;

int parent(int i);
int left(int i);
int right(int i);
void maxHeap(int node[], int i);
void buildMaxHeap(int node[]);

int main() {
	int i, node[500000];
	cin >> n;
	for (i = 1; i <= n; i++) cin >> node[i];
	
	buildMaxHeap(node);

	for (i = 1; i <= n; i++)cout << " " << node[i];
	cout << endl;

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