#include <tuple>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using node_t = tuple<int,int,int>;
using tree_t = vector<node_t>;

void preorder(tree_t tree,int id) {
	cout << " " << id;
	if (get<1>(tree[id]) != -1) {
		preorder(tree,get<1>(tree[id]));
	}
	if (get<2>(tree[id]) != -1) {
		preorder(tree,get<2>(tree[id]));
	}
}

void inorder(tree_t tree,int id) {
	if (get<1>(tree[id]) != -1) {
		inorder(tree,get<1>(tree[id]));
	}
	cout << " " << id;
	if (get<2>(tree[id]) != -1) {
		inorder(tree,get<2>(tree[id]));
	}
}

void postorder(tree_t tree,int id) {
	if (get<1>(tree[id]) != -1) {
		postorder(tree,get<1>(tree[id]));
	}
	if (get<2>(tree[id]) != -1) {
		postorder(tree,get<2>(tree[id]));
	}
	cout << " " << id;
}

int main() {
	int n; // number of nodes
	cin >> n;
	tree_t tree(n);
	for (int i = 0;i != n;++i) {
		int id,left,right;
		cin >> id >> left >> right;
		tree[i] = make_tuple(id,left,right);
	}
	// sort by id
	sort(tree.begin(),tree.end(),[](node_t n1,node_t n2) { return get<0>(n1) < get<0>(n2); });
	// mark root
	bool *is_root = new bool[n];
	for (int i = 0;i != n;++i) {
		is_root[i] = true; // default to all are roots
	}
	for (int i = 0;i != n;++i) {
		if (get<1>(tree[i]) != -1 && is_root[get<1>(tree[i])]) {
			is_root[get<1>(tree[i])] = false;
		}
		if (get<2>(tree[i]) != -1 && is_root[get<2>(tree[i])]) {
			is_root[get<2>(tree[i])] = false;
		}
	}
	// find root
	int root;
	for (int i = 0;i != n;++i) {
		if (is_root[i]) {
			root = i;
			break;
		}
	}
	delete [] is_root;
	cout << "Preorder" << endl;
	preorder(tree,root);
	cout << endl;
	cout << "Inorder" << endl;
	inorder(tree,root);
	cout << endl;
	cout << "Postorder" << endl;
	postorder(tree,root);
	cout << endl;
}