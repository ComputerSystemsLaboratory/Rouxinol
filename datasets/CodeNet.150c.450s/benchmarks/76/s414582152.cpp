#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
// #include<fstream>

using namespace std;

struct Node {
	int key;
	Node *parent, *left, *right;
};

Node * root = NULL;

void insert(int v) {
 	Node * newNode = (Node *)malloc(sizeof(Node));
 	newNode->key = v;
 	newNode->left = newNode->right = NULL;

 	Node * p = NULL;
 	Node * cur = root;

    while (cur != NULL) {
 		p = cur;
 		if (v > cur->key)
 			cur = cur->right;
 		else
 			cur = cur->left;
 	}

 	newNode->parent = p;

 	if (root == NULL) // if tree is empty
 		root = newNode;
 	else if (v > p->key)
 		p->right = newNode;
 	else
 		p->left = newNode;
}

Node* find(Node* curNode, int v) {
	while(curNode != NULL && curNode->key != v) {
		if (v > curNode->key)
			curNode = curNode->right;
		else
			curNode = curNode->left;
	}
	return curNode;
}


void preOrder(Node* node) {
	if (node == NULL)
		return;
	printf(" %d", node->key);
	preOrder(node->left);
	preOrder(node->right);
} 

void inOrder(Node* node) {
	if (node == NULL)
		return;
	inOrder(node->left);
	printf(" %d", node->key);
	inOrder(node->right);
}


int main() {
	int i, n, value;
	string command;
	Node * foundNode = NULL;

	// ifstream input;
	// input.open("input.txt");

	scanf("%d", &n);
	// input >> n;
	for (i = 0; i < n; i++) {
		// input >> command;
		cin >> command;
		if (command == "insert"){
			// input >> value;
			scanf("%d",&value);
			insert(value);
		}else if (command == "print"){
			inOrder(root);
			printf("\n");
			preOrder(root);
			printf("\n");
		}else if (command == "find"){
			// input >> value;
			scanf("%d",&value);
			
			foundNode = find(root, value);
			if (foundNode == NULL)
				printf("no\n");
			else
				printf("yes\n");
		}
	}

	// input.close();

	return 0;
}