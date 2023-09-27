#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>

using namespace std;

struct node {
	int left, right, per;
};

void preorder(int x, vector<node> &nd) {
	if (nd[x].left == -1 && nd[x].right == -1) cout << " " << x;
	else {
		cout << " " << x;
		if (nd[x].left != -1) preorder(nd[x].left, nd);
		if (nd[x].right != -1) preorder(nd[x].right, nd);
	}
}

void inorder(int x, vector<node> &nd) {
	if (nd[x].left == -1 && nd[x].right == -1) cout << " " << x;
	else {
		if (nd[x].left != -1) inorder(nd[x].left, nd);
		cout << " " << x;
		if (nd[x].right != -1) inorder(nd[x].right, nd);
	}
}

void postorder(int x, vector<node> &nd) {
	if (nd[x].left == -1 && nd[x].right == -1) cout << " " << x;
	else {
		if (nd[x].left != -1) postorder(nd[x].left, nd);
		if (nd[x].right != -1) postorder(nd[x].right, nd);
		cout << " " << x;
	}
}

int main() {
	int n, st = 0;
	cin >> n;
	vector<node> nd(n);
	for (int i = 0; i < n; i++) nd[i].per = -1;
	for (int i = 0; i < n; i++) {
		int id, left, right;
		cin >> id >> left >> right;
		nd[id].left = left;
		nd[id].right = right;
		if (left != -1) nd[left].per = id;
		if (right != -1) nd[right].per = id;
	}
	while (nd[st].per != -1) st = nd[st].per;
	cout << "Preorder" << endl;
	preorder(st, nd); 
	cout << endl;
	cout << "Inorder" << endl;
	inorder(st, nd);
	cout << endl;
	cout << "Postorder" << endl;
	postorder(st, nd);
	cout << endl;
}

//node 1: parent = 0, sibling = 4, degree = 2, depth = 1, height = 1, internal node