/*Binary Search Tree II
Write a program which performs the following operations to a binary search tree T by adding the find operation to A: Binary Search Tree I.

insert k: Insert a node containing k as key into T.
find k: Report whether T has a node containing k.
print: Print the keys of the binary search tree by inorder tree walk and preorder tree walk respectively.
Input
In the first line, the number of operations m is given. In the following m lines, operations represented by insert k, find k or print are given.

Output
For each find k operation, print "yes" if T has a node containing k, "no" if not.

In addition, for each print operation, print a list of keys obtained by inorder tree walk and preorder tree walk in a line respectively. Put a space character before each key.

Constraints
The number of operations ≤500,000
The number of print operations ≤10.
?2,000,000,000≤key≤2,000,000,000
The height of the binary tree does not exceed 100 if you employ the above pseudo code.
The keys in the binary search tree are all different.*/
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <set>
using namespace std;

struct Node{
	int key;
	Node *parent,*left,*right;
};

Node *root,*NIL;
set<int> S;

void print_inorder(){
	for(set<int>::iterator it=S.begin();it!=S.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}

void insert(int k){
	Node *y=NIL;
	Node *x=root;
	Node *z;
	z=(Node *)malloc(sizeof(Node));//随机分配区域节省内存 
	//先进行初始化 
	z->key=k;
	z->left=NIL;
	z->right=NIL;
	
	while(x!=NIL){
		y=x;
		if(z->key<x->key){
			x=x->left;
		}	
		else{
			x=x->right;
		}
	}
	z->parent=y;
	if(y==NIL){
		root=z;
	} 
	else{
		if(z->key<y->key){
			y->left=z;
		} 
		else{
			y->right=z;
		}
	}
}

void print_preorder(Node* u){
	if(u==NIL)
		return;
	cout<<" "<<u->key;
	print_preorder(u->left);
	print_preorder(u->right);
}

int main(){
	int n;
	cin>>n;
	string com;
	int k;

	for(int i=0;i<n;i++){
		cin>>com;
		if(com=="insert"){
			cin>>k;
			S.insert(k);
			insert(k);
		}
		else if(com=="find"){
			cin>>k;
			if(S.end()!=S.find(k))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		else if(com=="print"){
			print_inorder();
			print_preorder(root);
			cout<<endl;
		}
	} 
	
	return 0;
}
