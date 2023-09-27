#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Node {
public:
	int ID;
	int child1; 
	int child2;
public:
	Node() {}
	Node(int ID, int child1, int child2) { this->ID = ID; this->child1 = child1; this->child2 = child2; }
	bool operator<(const Node& rhs) { return this->ID < rhs.ID; }
	bool operator<=(const Node& rhs) { return this->ID <= rhs.ID; }
	bool operator>(const Node& rhs) { return this->ID > rhs.ID; }
	bool operator>=(const Node& rhs) { return this->ID >= rhs.ID; }
	bool operator==(const Node& rhs) { return this->ID == rhs.ID; }
	bool operator!=(const Node& rhs) { return this->ID != rhs.ID; }
	~Node(){}
};

void walk(Node* tree, int index_of_node, std::string order)
{
	if (order == "Preorder") std::cout << " " << index_of_node;
	
	int c1 = tree[index_of_node].child1;
	if (c1 >= 0) walk(tree, c1, order);
	
	if (order == "Inorder") std::cout << " " << index_of_node;
	
	int c2 = tree[index_of_node].child2;
	if (c2 >= 0) walk(tree, c2, order);
	
	if (order == "Postorder") std::cout << " " << index_of_node;
}

int main()
{
	int n;
	std::cin >> n;
	
	Node* bintree = new Node[n];
	
	for (int i=0; i<n; i++) {
		int ID;
		int c1, c2;
		std::cin >> ID >> c1 >> c2;
		bintree[i] = Node(ID, c1, c2);
	}
	
	std::sort(bintree, bintree + n);
	
	bool* isRoot = new bool[n];
	for (int i=0; i<n; i++) isRoot[i] = true;
	
	for (int i=0; i<n; i++) {
		if (bintree[i].child1 >= 0) isRoot[bintree[i].child1] = false;
		if (bintree[i].child2 >= 0) isRoot[bintree[i].child2] = false;
	}
	
	// search the index of the root node
	int index_of_root = -1;
	for (int i=0; i<n; i++) {
		if (isRoot[i]) { index_of_root = i; break; }
	}
	std::cout << "Preorder" << std::endl;
	walk(bintree, index_of_root, "Preorder"); std::cout << std::endl;
	std::cout << "Inorder" << std::endl;
	walk(bintree, index_of_root, "Inorder"); std::cout << std::endl;
	std::cout << "Postorder" << std::endl;
	walk(bintree, index_of_root, "Postorder"); std::cout << std::endl;
	
	delete[] isRoot;
	delete[] bintree;
	
	return 0;
}


