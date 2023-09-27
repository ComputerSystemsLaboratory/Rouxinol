#include <iostream>
#include <vector>
#include <string>
using namespace std;

class node{
	public:
		node* left;
		node* right;
		node* p;
		int key;
		node(){
			left=NULL;
			right=NULL;
			p=NULL;
		}
		node(int k){
			left=NULL;
			right=NULL;
			p=NULL;
			key=k;
		}
};

node* root=NULL;
int a[500002];
int n=0;

void insert(node*);
void print();
void preorder(node*);
void midorder(node*);

void insert(node* z){
	node *y=NULL;
	node *x=root;
	while(x!=NULL){
		y=x;
		if(z->key<x->key)x=x->left;
		else x=x->right;
	}
	z->p=y;
	if(y==NULL){
		// delete root;
		root=z;
	// cout<<"root:"<<root->key<<endl;
	}else if(z->key<y->key)y->left=z;
	else y->right=z;
}

void print(){
	midorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
}

string find(int k){
	node* x=root;
	while(x!=NULL){
		if(x->key==k)return "yes";
		if(k<x->key)x=x->left;
		else x=x->right;
	}
	return "no";
}

void midorder(node* i){
	if(i==NULL)return;
	midorder(i->left);
	// if(i!=root)cout<<" "<<i->key;
	cout<<" "<<i->key;
	midorder(i->right);
}

void preorder(node* i){
	if(i==NULL)return;
	// if(i!=root)cout<<" "<<i->key;
	cout<<" "<<i->key;
	preorder(i->left);
	preorder(i->right);
}

int main(void){
	int q,k;
	string s;
	cin>>q;
	while(q--){
		cin>>s;
		if(s[0]=='i'){
			cin>>k;
			insert(new node(k));
		}else if(s[0]=='p'){
			print();
		}else if(s[0]=='f'){
			cin>>k;
			cout<<find(k)<<endl;
		}
	}
	return 0;
}