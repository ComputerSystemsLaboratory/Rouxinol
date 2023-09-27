#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int val=0){
		data=val;
		left=NULL;
		right=NULL;
	}
};
Node *root;
void insert(Node *&root,int x){
	if(root==NULL){
		root=new Node(x);
		return;
	}
	else{
		if(x==root->data) return;
		else if(x<root->data) insert(root->left,x);
		else insert(root->right,x);
	}
	return;
}
void Inorder(Node *node){
	if(node==NULL) return;
	Inorder(node->left);
	cout<<' '<<node->data;
	Inorder(node->right);
}
void Preorder(Node *node){
	if(node==NULL) return;
	cout<<' '<<node->data;
	Preorder(node->left);
	Preorder(node->right);
}
bool find(Node *&root,int x){
	if(root==NULL) return false;
	if(root->data==x) return true;
	else if(root->data<x){
		return find(root->right,x);
	}
	else{
		return find(root->left,x);
	}
}
int main(){
	root=NULL;
	int m;
	cin>>m;
	while(m--){
		string str;
		cin>>str;
		if(str[0]=='i'){
			int data;
			cin>>data;
			insert(root,data);
		}
		else if(str[0]=='f'){
			int data;
			cin>>data;
			if(find(root,data)) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		else{
			Inorder(root);
			cout<<endl;
			Preorder(root);
			cout<<endl;
		}
	}
} 