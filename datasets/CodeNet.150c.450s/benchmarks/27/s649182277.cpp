#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

struct Node_t{
	int key;
	Node_t *parent,*left,*right;
};

Node_t *root,*NIL;

void insert(int k);
void inPause(Node_t *u);
void prePause(Node_t *u);

int main(){
	int m; cin>>m;
	string command; int key;
	for(int i=0;i<m;i++){
		cin>>command;
		if(command=="insert"){
			cin>>key;
			insert(key);
		}else if(command=="print"){
			inPause(root);
			cout<<endl;
			prePause(root);
			cout<<endl;
		}
	}

}

void insert(int k){
	Node_t *x,*y,*z;
	y = NIL; x = root;
	z = (Node_t *)malloc(sizeof(Node_t));
	z->key = k;
	z->left = NIL; z->right = NIL;

	while(x!=NIL){
		y = x;
		if(z->key < x->key){
			x = x->left;
		}else{
			x = x->right;
		}
	}
	z->parent = y;

	if(y==NIL){
		root = z;
	}else{
		if(z->key < y->key){
			y->left = z;
		}else{
			y->right = z;
		}
	}
}

void inPause(Node_t *u){
	if(u==NIL) return;
	inPause(u->left);
	cout<<" "<<u->key;
	inPause(u->right);
}

void prePause(Node_t *u){
	if(u==NIL) return;
	cout<<" "<<u->key;
	prePause(u->left);
	prePause(u->right);
}