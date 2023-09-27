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
		if (z->key < y->key) y->left = z;
		else y->right = z;
	}
}

bool find(Node *T, int key)
{
	if (T == NULL) return false;
	
	if (key == T->key) return true;
	if (key < T->key) return find(T->left, key);
	else return find(T->right, key);
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
	std::string strn;
	getline(std::cin, strn);
	
	int n = std::stoi(strn);
	
	Node* BST = NULL;
	
	for (int i=0; i<n; i++) {
		std::string buf;
		getline(std::cin, buf);
		int pos = buf.find(' ', 0);
		if (pos == std::string::npos) {
			// print
			walk_inorder(BST); std::cout << std::endl;
			walk_preorder(BST); std::cout << std::endl;
		}
		else {
			std::string op = buf.substr(0, pos);
			int key = std::stoi(buf.substr(pos+1));
			if ( op == "insert") {
				Node* z = new Node(key);
				insert(&BST, z);
			}
			else if ( op == "find" ) {
				if (find(BST, key)) std::cout << "yes" << std::endl;
				else std::cout << "no" << std::endl;
			}
		}
	}
	
	deleteNodes(BST);
	
	return 0;
}

