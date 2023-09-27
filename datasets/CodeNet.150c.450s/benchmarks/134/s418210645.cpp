#include<iostream>

struct tree {
	int id, left, right, parent;
};

void init(tree trees[], int n) {
	for (int i = 0; i < n; i++) {
		trees[i].parent = -1;
	}
}

void sort(tree trees[], int n) {
	tree temp;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			if (trees[j - 1].id > trees[j].id) {
				temp = trees[j - 1];
				trees[j - 1] = trees[j];
				trees[j] = temp;
			}
		}
	}
}

void setParent(tree trees[], int n){
	for (int i = 0; i < n; i++) {
		if (trees[i].left != -1) {
			trees[trees[i].left].parent = trees[i].id;
		}
		if (trees[i].right != -1) {
			trees[trees[i].right].parent = trees[i].id;
		}
	}
}

void Preorder(tree trees[], int node) {
	std::cout << " " << trees[node].id;
	if (trees[node].left != -1) {
		Preorder(trees, trees[node].left);
	}
	if (trees[node].right != -1) {
		Preorder(trees, trees[node].right);
	}
}

void Inorder(tree trees[], int node) {
	if (trees[node].left != -1) {
		Inorder(trees, trees[node].left);
	}
	std::cout << " " << trees[node].id;
	if (trees[node].right != -1) {
		Inorder(trees, trees[node].right);
	}
}

void Postorder(tree trees[], int node) {
	if (trees[node].left != -1) {
		Postorder(trees, trees[node].left);
	}
	if (trees[node].right != -1) {
		Postorder(trees, trees[node].right);
	}
	std::cout << " " << trees[node].id;
}
int main() {
	int n;
	tree trees[25];

	// ??????????????°?????\???
	std::cin >> n;

	init(trees, n);
	int id, left, right;
	for (int i = 0; i < n; i++) {
		std::cin >> id >> left >> right;
		trees[i].id = id;
		trees[i].left = left;
		trees[i].right = right;
	}

	sort(trees, n);
	setParent(trees, n);

	for (int i = 0; i < n; i++) {
		if (trees[i].parent == -1) {
			std::cout << "Preorder" << std::endl;
			Preorder(trees, i);
			std::cout << std::endl << "Inorder" << std::endl;
			Inorder(trees, i);
			std::cout << std::endl << "Postorder" << std::endl;
			Postorder(trees, i);
		}
	}
	std::cout << std::endl;
	return 0;
}