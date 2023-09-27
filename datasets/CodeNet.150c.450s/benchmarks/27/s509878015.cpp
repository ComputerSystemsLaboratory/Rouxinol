#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
using namespace std;

struct tree{
	int value;
	tree *Left;
	tree *Right;
};

tree *root;

class binary_tree{
	public:
		binary_tree();
		int insert1(int);
		int insert11(tree *, int);
		tree *insert2(tree *, tree *);
		tree *find(int);
		int delete1(int);
		int pretraverse(tree *);
		int intraverse(tree *);
		int posttraverse(tree *);
};

binary_tree::binary_tree(){
	root = NULL;
}

tree * binary_tree::insert2(tree *node, tree *newnode){
	if (node == NULL)
		node = newnode;
	else
		if ( newnode->value > node->value)
			if (node->Right == NULL)
				node->Right = newnode;
			else
				insert2(node->Right, newnode);
		else
			if (node->Left == NULL)
				node->Left =newnode;
			else
				insert2(node->Left, newnode);
	return node;
}

int binary_tree::insert1(int n){
	tree *temp = root, *newnode;

	newnode = new tree;
	newnode->value = n;
	newnode->Left = NULL;
	newnode->Right = NULL;
	root = insert2(temp, newnode);
	return 0;
}

tree *binary_tree::find(int n){
	tree *p=root;
//	p = root;
	while (p != NULL)
		if (p->value = n)
			return p;
		else if (p->value < n)
			p = p->Right; 
		else if (p->value > n)
			p = p->Left;

	return NULL;
}

int binary_tree::pretraverse(tree *p = root){
	if (root==NULL){}
	else if (p != NULL){
		cout << " " << p->value;
		pretraverse(p->Left);
		pretraverse(p->Right);
	}
	return 0;
}

int binary_tree::intraverse(tree *p = root){
	if (root == NULL){}
	else if (p != NULL){
		intraverse(p->Left);
		cout << " " << p->value;
		intraverse(p->Right);
	}
	return 0;
}

int binary_tree::posttraverse(tree *p = root){
	if (root == NULL){}
	else if (p != NULL){
		posttraverse(p->Left);
		posttraverse(p->Right);
		cout << " " << p->value;
	}
	return 0;
}

int binary_tree::delete1(int key){
	tree *p=root, *parent=root, *marker;

	p = find(key);

	marker = p;
	if (p==NULL){}
	else if (p == root){
		if (p->Left == NULL && p->Right == NULL)
			root = NULL;

		else if (p->Left == NULL)
			root = p->Right;

		else if (p->Right == NULL)
			root = p->Left;

		else{
			tree *minp;
			minp = p->Right;
			while (minp->Left != NULL){
				p = minp;
				minp = minp->Left;
			}
			if (minp != p->Right){
				p->Left = minp->Right;
				minp->Right = root->Right;
			}
			minp->Left = root->Left;
			root = minp;
		}
	}else{
		if (p->Left == NULL && p->Right == NULL)
			if (parent->Left == p)
				parent->Left = NULL;
			else
				parent->Right = NULL;
		else if (p->Left == NULL)
			if (parent->Left == p)
				parent->Left = p->Right;
			else
				parent->Right = p->Right;
		else if (p->Right == NULL)
			if (parent->Left == p)
				parent->Left = p->Left;
			else
				parent->Right = p->Left;
		else{
			tree *minp;
			parent = p;
			minp = p->Right;
			while (minp->Left != NULL){
				parent = minp;
				minp = minp->Left;
			}
			if (minp != p->Right){
				p->Left = minp->Right;
				minp->Right = parent->Right;
			}
			minp->Left = parent->Left;
			parent = minp;
		}
		delete marker;
	}
	return 0;
}

int str2int(string text){
	stringstream buf;
	int n;

	buf<<text;
	buf>>n;
	return n;
}
string int2str(int n){
	stringstream buf;
	string text;

	buf<<n;
	buf>>text;
	return text;
}

int main(void){
	int n;
	string text,text1;
	binary_tree btree;
	tree *p = root;

	cin >> n;
	getline(cin, text);
	for (int i=0; i<n; i++){
		getline(cin, text);
		int temp=0;
		switch (text[0]){
			case 'i':
				temp = str2int(text.substr(7));
				btree.insert1(temp);
				break;
			case 'p':
				btree.intraverse();
				cout << endl;
				btree.pretraverse();
				cout << endl;
				break;
		}
	}
	return 0;
} 