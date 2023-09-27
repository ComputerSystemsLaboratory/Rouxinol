#include <iostream>
#include <vector>
#define NIL (-1)
#define REP(i,N) for(int i=0;i<N;++i)

using namespace std;

struct BinaryTreeNode {
	int p;// parent
	int l;// left
	int r;// right
};

/// the root tree, left subtree and right subtree
void walk_by_preorder(int id, vector<BinaryTreeNode> &T) {
	if (id == NIL) {
		return;
	}
	cout << " " << id;
	walk_by_preorder(T[id].l, T);
	walk_by_preorder(T[id].r, T);
}

/// the left-subtree, the root and right subtree 
void walk_by_inorder(int id, vector<BinaryTreeNode> &T) {
	if (id == NIL) return;
	walk_by_inorder(T[id].l, T);
	cout << " " << id;
	walk_by_inorder(T[id].r, T);
}

/// the left-subtree, right subtree and root tree
void walk_by_postorder(int id, vector<BinaryTreeNode> &T) {
	if (id == NIL) return;
	walk_by_postorder(T[id].l, T);
	walk_by_postorder(T[id].r, T);
	cout << " " << id;
}

int main () {
	int n;
	cin >> n;
	vector<BinaryTreeNode> T(n);
	REP(i,n) {
		T[i].p = T[i].l = T[i].r = NIL;
	}

	REP(i,n) {
		int id, left, right;
		cin >> id >> left >> right;
		T[id].l = left;
		T[id].r = right;
		if (left != NIL) T[left].p = id;
		if (right!= NIL) T[right].p = id;
	}

	int root_id;
	REP(i,T.size()) {
		if (T[i].p == NIL) {
			root_id = i;
			break;
		}
	}
	cout << "Preorder" << endl;
	walk_by_preorder(root_id, T);
	cout << endl;
	cout << "Inorder" << endl;
	walk_by_inorder(root_id, T);
	cout << endl;
	cout << "Postorder" << endl;
	walk_by_postorder(root_id, T);
	cout << endl;
	return 0;
}

