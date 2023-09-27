#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

typedef struct node* treepointer;
struct node{
	int data;
	treepointer leftchild,rightchild,parent;
};
void inorder(treepointer ptr){
	if(ptr){
		inorder(ptr->leftchild);
		cout<<" "<<ptr->data;
		inorder(ptr->rightchild);
	}
}
void preorder(treepointer ptr){
	if(ptr){
		cout << " " << ptr->data;
		preorder(ptr->leftchild);
		preorder(ptr->rightchild);
	}
}
void lastorder(treepointer ptr){
	if(ptr){
		lastorder(ptr->leftchild);
		lastorder(ptr->rightchild);
		cout << " " << ptr->data;
		
	}
}
int main(){
	int n;
	cin >> n;
	vector<node> tree(n);
	int x, y, z,root;
	for (int i = 0; i < n; i++) {
		cin >> z>> x>> y;
		tree[z].data = z;
		if (x == -1)
			tree[z].leftchild = NULL;
		else {
			tree[x].parent = &tree[z];
			tree[z].leftchild = &tree[x];
		}
		if (y == -1)
			tree[z].rightchild = NULL;
		else {
			tree[z].rightchild = &tree[y];
			tree[y].parent = &tree[z];
		}
	}
	cout << "Preorder" << endl;
	treepointer m = &tree[0];
	while (m->parent) m = m->parent;
	preorder(m);
	cout << endl << "Inorder" << endl;
	inorder(m);
	cout << endl << "Postorder" << endl;
	lastorder(m);
	cout << endl;
	return 0;
}