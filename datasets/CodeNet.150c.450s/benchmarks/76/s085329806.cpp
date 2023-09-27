#include <iostream>
#include <vector>

using namespace std;

struct node {
	long long key;
	int left;
	int right;
};

vector<node> tree;

void preorder_walk(int ind) {
	if (ind < 0) {
		return;
	}
	cout << " " << tree[ind].key;
	preorder_walk(tree[ind].left);
	preorder_walk(tree[ind].right);
	return;
}

void inorder_walk(int ind) {
	if (ind < 0) {
		return;
	}
	inorder_walk(tree[ind].left);
	cout << " " << tree[ind].key;
	inorder_walk(tree[ind].right);
	return;
}

void insert(int ind) {
	if (ind == 0) {
		return;
	}
	bool find = false;
	int now = 0;
	while (!find) {
		if (tree[now].key < tree[ind].key) {
			if (tree[now].right == -1) {
				tree[now].right = ind;
				find = true;
			}
			else {
				now = tree[now].right;
			}
		}
		else {
			if (tree[now].left == -1) {
				tree[now].left = ind;
				find = true;
			}
			else {
				now = tree[now].left;
			}
		}
	}
	return;
}

bool find_key(int num) {
	int now = 0;
	while (now >= 0) {
		if (tree[now].key == num) {
			return true;
		}
		else if (tree[now].key < num) {
			now = tree[now].right;
		}
		else {
			now = tree[now].left;
		}
	}
	return false;
}

int main(void) {
	int nop;
	cin >> nop;

	string ope;
	int ind = 0;
	long long num;
	tree = vector<node>(nop,{-1,-1,-1});
	for (int q = 0; q < nop; ++q) {
		cin >> ope;
		if (ope == "print") {
			inorder_walk(0);
			cout << endl;
			preorder_walk(0);
			cout << endl;
		}
		else {
			if (ope == "insert") {
				cin >> tree[ind].key;
				insert(ind);
				++ind;
			}
			else {
				cin >> num;
				if (find_key(num)) {
					cout << "yes" << endl;
				}
				else {
					cout << "no" << endl;
				}
			}
		}
	}
	return 0;
}

