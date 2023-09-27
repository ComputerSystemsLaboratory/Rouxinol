#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct Node{
	int key;
	Node *parent, *left, *right;
	Node():parent(NULL),left(NULL),right(NULL),key(0){ }
};
Node *root=NULL;int m,cnt=0;
Node * insert(int k,Node *r){
	if(!r){
		r=new Node;
		r->key=k;
	}else if(k>r->key) {
		r->right=insert(k,r->right);
	}else {
		r->left=insert(k,r->left);
	}
	return r;
}
void inorder(Node * r){
	if(!r)return;
	inorder(r->left);
	cout<<" "<<r->key;
	inorder(r->right);
}
void preorder(Node *r){
	if(!r)return ;
	cout<<" "<<r->key;
	preorder(r->left);
	preorder(r->right);
}
void print(){
	cnt=0;
	inorder(root);
	putchar('\n');
	cnt=0;
	preorder(root);
	putchar('\n');
}
bool find(int k,Node * r){
	if(!r) return false;
	if(k==r->key)return true;
	bool flag=false;
	if(k>r->key) flag|=find(k,r->right);
	else flag|=find(k,r->left);
	return flag;
}
int main(){
	int key;
	string s;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>s;
		if(s=="insert"){
			cin>>key;
			root=insert(key,root);
		}else if(s=="print"){
			print();
		}else if(s=="find"){
			cin>>key;
			cout<< (find(key,root)?"yes":"no") <<endl; 
		}
	}
	return 0;
}
