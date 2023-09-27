#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node{
	int key;
	struct node *parent;
	struct node *left;
	struct node *right;
} Node, Tree;

void insert(Tree **T, int key)
{
	Node *pre = NULL;
	Node *curr = *T;
	Node *newNode = NULL;
	
	newNode = (Node*)malloc(sizeof(Node));
	newNode->key = key;
	newNode->left = NULL;
	newNode->right = NULL;
	
	while (curr != NULL) {
		pre = curr;
		if (key > curr->key) {
			curr = curr->right;
		} else {
			curr = curr->left;
		}
	}
	
	newNode->parent = pre;
	
	//如果根结点存在，则pre一定不为空，反之pre为空 
	if (pre == NULL) {
		*T = newNode;
	} else {
		if (key > pre->key) {
			pre->right = newNode;
		} else {
			pre->left = newNode;
		}
	}
}

void Inorder(Tree *T)
{
	if (T == NULL)
		return;
		
	Inorder(T->left);
	cout << " " << T->key;
	Inorder(T->right);
}

void Preorder(Tree *T)
{
	if (T == NULL)
		return;
		
	cout << " " << T->key;	
	Preorder(T->left);
	Preorder(T->right);
}

void print(Tree *T)
{
	Inorder(T);
	cout << '\n';
	Preorder(T);
	cout << '\n';
}

int main(void)
{
	Tree *T = NULL;
	int n;
	int key;
	string cmd;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "insert") {
			cin >> key;
			insert(&T, key);
		} else {
			print(T);
		}
	}
	
	
	return 0;
}
