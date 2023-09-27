#include<iostream>
#include<vector>

struct tree {
	int key, parent, left, right;
};

void setChildrenAndParent(std::vector<tree> &v, int tree_num) {
	for (int i = 1; i <= tree_num; i++) {
		if (i * 2 <= tree_num) {
			v[i].left = v[i * 2].key;
			v[i * 2].parent = v[i].key;
		}
		if (i * 2 + 1 <= tree_num) {
			v[i].right = v[i * 2 + 1].key;
			v[i * 2 + 1].parent = v[i].key;
		}
	}
}

int main() {
	int node_num;

	std::cin >> node_num;
	std::vector<tree> v(node_num + 1);
	for (int i = 1; i <= node_num; i++) {
		int number;
		std::cin >> number;
		v[i].key = number;
		v[i].parent = 3000000;
		v[i].left = 3000000;
		v[i].right = 3000000;
	}

	setChildrenAndParent(v, node_num);

	for (int i = 1; i <= node_num; i++) {
		std::cout << "node " << i << ": ";
		std::cout << "key = " << v[i].key << ", ";
		if (v[i].parent != 3000000) std::cout << "parent key = " << v[i].parent << ", ";
		if (v[i].left != 3000000) std::cout << "left key = " << v[i].left << ", ";
		if (v[i].right != 3000000) std::cout << "right key = " << v[i].right << ", ";
		std::cout << std::endl;
	}
	return 0;
}