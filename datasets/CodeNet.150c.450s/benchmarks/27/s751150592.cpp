#include <iostream>

class Node {
public:
	int key;
	Node* left;
	Node* right;
	Node* parent;
	Node() {left = right = parent = NULL;}
	Node(int key) { this->key = key; left = right = parent = NULL;}
	~Node(){}
};

void insert(Node** T, Node* z)
{	
	Node* y = NULL;
	Node* x = *T; // address of root
	while ( x != NULL ) {
		y = x;
		if (z->key < x->key) x = x->left;
		else x = x->right;
	}
	z->parent = y;
	
	if ( y == NULL ) *T = z; // T is empty
	else {
		if (z->key < y->key) {
			y->left = z; //std::cout << z << "is a LEFT child of " << y << std::endl;
		}
		else {
			y->right = z; //std::cout << z << "is a RIGHT child of " << y << std::endl;
		}
	}
}

void walk_preorder(Node* T)
{
	std::cout << " " << T->key;
	if (T->left != NULL) walk_preorder(T->left);
	if (T->right != NULL) walk_preorder(T->right);
}

void walk_inorder(Node* T)
{
	if (T->left != NULL) walk_inorder(T->left);
	std::cout << " " << T->key;
	if (T->right != NULL) walk_inorder(T->right);
}

void deleteNodes(Node* x)
{
	if (x->left != NULL) deleteNodes(x->left);
	if (x->right != NULL) deleteNodes(x->right);
	delete x;
}
	
int main()
{
	int n;
	std::cin >> n;
	
	char dummy;
	std::cin >> dummy; // to avoid \n
	
	Node* BST = NULL;
	
	for (int i=0; i<n; i++) {
		//std::cout << BST << std::endl;
		std::string buf;
		getline(std::cin, buf);
		int pos = buf.find(' ', 0);
		if (pos == std::string::npos) {
			// print
			walk_inorder(BST); std::cout << std::endl;
			walk_preorder(BST); std::cout << std::endl;
		}
		else { // insert
			int key = std::stoi(buf.substr(pos+1));
			Node* z = new Node(key);
			//std::cout << "node " << i << ": " << z << std::endl;
			insert(&BST, z);
		}
	}
	
	deleteNodes(BST);
	
	return 0;
}

