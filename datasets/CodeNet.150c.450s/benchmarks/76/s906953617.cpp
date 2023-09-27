#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

#include <cstdio>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, s, n) for (int i = (s); i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define rrep1(i, s, n) for (int i = (s); i >= (n); i--)
#define print_array(ary, size) cout << ary[0]; rep1(i, 1, size - 1) cout << ' ' << ary[i]; cout << endl;
typedef long long ll;
typedef unsigned long long ull;



typedef struct Node {
	int key;
	Node* parent;
	Node* left;
	Node* right;
} Node;

class BST {
private:
	Node root;

	/* Preorder */
	void PreO(Node* node)
	{
		cout << ' ' << node->key;
		if (node->left != NULL) PreO(node->left);
		if (node->right != NULL) PreO(node->right);
	}
	/* Inorder */
	void InO(Node* node)
	{
		if (node->left != NULL) InO(node->left);
		cout << ' ' << node->key;
		if (node->right != NULL) InO(node->right);
	}
	/* Postorder */
	void PostO(Node* node)
	{
		if (node->left != NULL) PostO(node->left);
		if (node->right != NULL) PostO(node->right);
		cout << ' ' << node->key;
	}
	/* find */
	void findthis(Node* node, int key)
	{
		if (node->key == key) {
			cout << "yes" << endl;
		}
		else if (key < node->key) {
			if (node->left == NULL) {
				cout << "no" << endl;
			}
			else {
				findthis(node->left, key);
			}
		}
		else {
			if (node->right == NULL) {
				cout << "no" << endl;
			}
			else {
				findthis(node->right, key);
			}
		}
	}
public:
	/* Constructor */
	BST()
	{
		root.key = 2000000001;
		root.parent = NULL;
		root.left = NULL;
		root.right = NULL;
	}
	/* Destructor */
	~BST()
	{

	}
	/* insert */
	void insert(int key)
	{
		if (root.key == 2000000001) {
			root.key = key;
			return;
		}

		Node* add = new Node;
		Node* parent = &root;

		add->key = key;
		add->left = NULL;
		add->right = NULL;

		while (parent != NULL) {
			add->parent = parent;
			if (add->key < parent->key) parent = parent->left;
			else parent = parent->right;
		}

		if (add->key < add->parent->key) add->parent->left = add;
		else add->parent->right = add;
	}
	/* Preorder */
	void Preorder()
	{
		PreO(&root);
		cout << endl;
	}
	/* Inorder */
	void Inorder()
	{
		InO(&root);
		cout << endl;
	}
	/* Postorder */
	void Postorder()
	{
		PostO(&root);
		cout << endl;
	}
	/* find */
	void find(int key)
	{
		findthis(&root, key);
	}
};

int main()
{
	BST Tree;
	int n;
	string direction;
	int key;

	cin >> n;

	rep(i, n) {
		cin >> direction;
		if (direction == "insert") {
			cin >> key;
			Tree.insert(key);
		}
		else if (direction == "print") {
			Tree.Inorder();
			Tree.Preorder();
		} 
		else if (direction == "find") {
			cin >> key;
			Tree.find(key);
		}
	}

	return 0;
}
