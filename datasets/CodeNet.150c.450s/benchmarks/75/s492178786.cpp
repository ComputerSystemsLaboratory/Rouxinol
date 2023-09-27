#include <iostream>
using namespace std;
#define MAX 1000000
struct Node {
	int parent, left, right, key,root;
};
Node *T;
void maxHeap(int i) {
	int largest;
	int l = 2*i+1;
	int r = 2*i+2;
	if (l<T[i].root && T[l].key>T[i].key) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r<T[i].root && T[r].key>T[largest].key) {
		largest = r;
	}
	if (largest != i) {
		Node tmp = T[i];
		T[i] = T[largest];
		T[largest] = tmp;
		maxHeap(largest);
	}
}
int main() {
	int n,id, max = 0;;
	cin >> n;
	T=new Node[2*n];
	for (int i = 0; i < n; i++) {
		cin >> id;
		T[i].key = id;
		T[i].root=n;
	}
	for (int i = 0; i < n; i++) {
		T[i].left = T[2 * i + 1].key;
		T[i].right = T[2 * i + 2].key;
		T[2 * i + 1].parent = T[i].key;
		T[2 * i + 2].parent = T[i].key;
	}
	for(int i=n/2;i>=0;i--){
	    maxHeap(i);
	}
	for (int i = 0; i < n; i++) {
		cout << " " << T[i].key;
	}
	cout << endl;
	
}
