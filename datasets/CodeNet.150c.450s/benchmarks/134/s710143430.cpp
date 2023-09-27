#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int id;
	Node *pLeft;
	Node *pRight;

	Node() {
		id = -1;
		pLeft = pRight = NULL;
	}
};

Node* NodeExist[25];

Node* addNode(Node *p, int id) {
	if (id == -1) {
		return NULL;
	}

	p = NodeExist[id];
	if (p == NULL) {
		p = new Node();
		NodeExist[id] = p;
		p->id = id;
	}
	
	return p;
}

void solve(int id, int left, int right) {
	Node* p = NULL;

	if (NodeExist[id] == NULL) {
		p = addNode(p, id);
	}
	else {
		p = NodeExist[id];
	}

	p->pLeft = addNode(p->pLeft, left);
	p->pRight = addNode(p->pRight, right);
}

void showTreeByPreorder(Node *p) {

	cout << " " << p->id;
	if (p->pLeft != NULL) {
		showTreeByPreorder(p->pLeft);
	}
	if (p->pRight != NULL) {
		showTreeByPreorder(p->pRight);
	}
}

void showTreeByInorder(Node *p) {

	if (p->pLeft != NULL) {
		showTreeByInorder(p->pLeft);
	}
	cout << " " << p->id;
	if (p->pRight != NULL) {
		showTreeByInorder(p->pRight);
	}
}

void showTreeByPostorder(Node *p) {

	if (p->pLeft != NULL) {
		showTreeByPostorder(p->pLeft);
	}
	if (p->pRight != NULL) {
		showTreeByPostorder(p->pRight);
	}
	cout << " " << p->id;
}

void freeNode(Node *p) {
	if (p == NULL) {
		return;
	}
	if (p->pLeft != NULL) {
		freeNode(p->pLeft);
	}
	if (p->pRight != NULL) {
		freeNode(p->pRight);
	}

	delete p;
	p = NULL;
}

int RootId[25];

int main() {
	int n, id, left, right, rootId;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		RootId[i] = i;
	}

	for (int i = 0; i < n; ++i) {
		cin >> id >> left >> right;
		if (RootId[id] == id) {
			RootId[id] = id;
		}
		if (left != -1) {
			RootId[left] = id;
		}
		if (right != -1) {
			RootId[right] = id;
		}

		solve(id, left, right);
	}
	
	for (int i = 0; i < n; ++i) {
		if (RootId[i] == i) {
			rootId = i;
			break;
		}
	}

	cout << "Preorder" << endl;
	showTreeByPreorder(NodeExist[rootId]);

	cout << endl << "Inorder" << endl;
	showTreeByInorder(NodeExist[rootId]);

	cout << endl << "Postorder" << endl;
	showTreeByPostorder(NodeExist[rootId]);
	cout << endl;

	freeNode(NodeExist[rootId]);

	return 0;
}
