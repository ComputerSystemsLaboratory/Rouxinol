#include <iostream>
using namespace std;

#define cMaxLimit 250
#define NIL 2000000001

typedef struct {
	int key;
	int parent;
	int leftChild;
	int rightChild;
}Node;

void print(Node node[], int maxNum) {
	for (int i = 1; i <= maxNum; i++) {
		cout << "node " << i << ": ";
		cout << "key = " << node[i].key << ", ";
		if (node[i].parent != NIL) {
			cout << "parent key = " << node[i].parent << ", ";
		}
		if (node[i].leftChild != NIL) {
			cout << "left key = " << node[i].leftChild << ", ";
		}
		if (node[i].rightChild != NIL) {
			cout << "right key = " << node[i].rightChild << ", ";
		}
		cout << endl;
	}
}

int main() {
	int nodeMaxNum;
	Node node[cMaxLimit+1];//????????????????????????1-???????????????????????????
	cin >> nodeMaxNum;

	for (int i = 1; i <= nodeMaxNum; i++) {
		int key; cin >> key;
		node[i].key = key;
		node[i].leftChild = NIL;
		node[i].rightChild = NIL;
		node[i].parent = NIL;
	}
	for (int i = 1; i <= nodeMaxNum; i++) {
		if (i / 2 >= 1) {
			node[i].parent = node[i / 2].key;
		}
		if (i * 2 <= nodeMaxNum) {
			node[i].leftChild = node[i * 2].key;
		}
		if (i * 2 + 1 <= nodeMaxNum) {
			node[i].rightChild = node[i * 2 + 1].key;
		}
	}

	print(node, nodeMaxNum);

	return 0;
}