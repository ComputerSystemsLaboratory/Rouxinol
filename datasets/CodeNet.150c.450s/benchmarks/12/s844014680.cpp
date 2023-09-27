#include <iostream>
using namespace std;

#define cMaxLimit 250

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
		if (node[i].parent != -1) {
			cout << "parent key = " << node[i].parent << ", ";
		}
		if (node[i].leftChild != -1) {
			cout << "left key = " << node[i].leftChild << ", ";
		}
		if (node[i].rightChild != -1) {
			cout << "right key = " << node[i].rightChild << ", ";
		}
		cout << endl;
	}
}

int main() {
	int nodeMaxNum;
	Node node[cMaxLimit+5];//????????????????????????1-???????????????????????????
	cin >> nodeMaxNum;

	for (int i = 1; i <= nodeMaxNum; i++) {
		int key; cin >> key;
		node[i].key = key;
		node[i].leftChild = -1;
		node[i].rightChild = -1;
		node[i].parent = -1;
	}
	for (int i = 1; i <= nodeMaxNum; i++) {
		cout << "node " << i << ": ";
		cout << "key = " << node[i].key << ", ";
		if (i/2 >= 1) {
			cout << "parent key = " << node[i/2].key << ", ";
		}
		if (i*2 <= nodeMaxNum) {
			cout << "left key = " << node[i * 2].key << ", ";
		}
		if (i*2+1 <= nodeMaxNum) {
			cout << "right key = " << node[i * 2 + 1].key << ", ";
		}
		cout << endl;
	}
	//for (int i = 1; i <= nodeMaxNum; i++) {
	//	if (i / 2 >= 1) {
	//		node[i].parent = node[i / 2].key;
	//	}
	//	if (i * 2 <= nodeMaxNum) {
	//		node[i].leftChild = node[i * 2].key;
	//	}
	//	if (i * 2 + 1 <= nodeMaxNum) {
	//		node[i].rightChild = node[i * 2 + 1].key;
	//	}
	//}

//	print(node, nodeMaxNum);

	return 0;
}