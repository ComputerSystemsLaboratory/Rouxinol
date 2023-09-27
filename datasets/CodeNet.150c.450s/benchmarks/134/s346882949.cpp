#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int parent, left, right;

	Node() {
		parent = left = right = -1;
	}
};

Node TreeInfo[25];

void showTreeByPreorder(int num) {

	if (num == -1) {
		return;
	}
	cout << " " << num;
	showTreeByPreorder(TreeInfo[num].left);
	showTreeByPreorder(TreeInfo[num].right);
}

void showTreeByInorder(int num) {

	if (num == -1) {
		return;
	}
	showTreeByInorder(TreeInfo[num].left);
	cout << " " << num;
	showTreeByInorder(TreeInfo[num].right);
}

void showTreeByPostorder(int num) {

	if (num == -1) {
		return;
	}
	showTreeByPostorder(TreeInfo[num].left);
	showTreeByPostorder(TreeInfo[num].right);
	cout << " " << num;
}

int main() {
	int n, id, left, right, rootId;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> id >> left >> right;
		TreeInfo[id].left = left;
		TreeInfo[id].right = right;
		if (left != -1) {
			TreeInfo[left].parent = id;
		}
		if (right != -1) {
			TreeInfo[right].parent = id;
		}
	}
	
	for (rootId = 0; rootId < n; ++rootId) {
		if (TreeInfo[rootId].parent == -1) {
			break;
		}
	}

	cout << "Preorder" << endl;
	showTreeByPreorder(rootId);

	cout << endl << "Inorder" << endl;
	showTreeByInorder(rootId);

	cout << endl << "Postorder" << endl;
	showTreeByPostorder(rootId);
	cout << endl;

	return 0;
}
