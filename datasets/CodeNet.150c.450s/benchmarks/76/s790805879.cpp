
#include <iostream>
#include <stdio.h>
#define N_MAX 500000
using namespace std;
//thik&solve easy 

int n;//num of input

class node{//将来を見据えて動的にしています
public:
	int *key;
	node *parent;
	node *l_chld;
	node *r_chld;

	node(int n){
		key =new int(n);
		
		parent = NULL;
		l_chld = NULL;
		r_chld = NULL;
	}

	~node(){
		delete key;
		delete parent;
		delete l_chld;
		delete r_chld;
	}
};

void insert(node **root,node *z){
	node *y;
	node *x;
	y = NULL;
	x = *root;
	while(x != NULL){
		y = x;
		if(*(z->key) < *(x->key))
			x = x->l_chld;
		else
			x = x->r_chld;
		z->parent = y;
	}

	if(y == NULL)
		*root = z;
	else if(*(z->key) < *(y->key))
		y->l_chld = z;
	else
		y->r_chld = z;
	
}

void preorder(node* u){
	node* pos;
	cout <<" " <<*(u->key);

	if(u->l_chld != NULL){
		pos = u->l_chld;
		preorder(pos);
	}

	if(u->r_chld != NULL){
		pos = u->r_chld;
		preorder(pos);
	}
}

void inorder(node* u){
	node* pos;
	
	if(u->l_chld != NULL){
		pos = u->l_chld;
		inorder(pos);
	}
	cout <<" " <<*(u->key);

	if(u->r_chld != NULL){
		pos = u->r_chld;
		inorder(pos);
	}
}

void print(node *u){
	inorder(u);
	cout <<endl;

	preorder(u);
	cout <<endl;

}

bool find(node* u,int k){
	node* pos;
	bool b;
	if(k == *(u->key)) return true;

	//if(u->l_chld == NULL && u->r_chld == NULL) return false;

	if(k < *(u->key)){
		if(u->l_chld == NULL) return false;
		pos = u->l_chld;
		b = find(pos,k);
	}else{
		if(u->r_chld == NULL) return false;
		pos = u->r_chld;
		b = find(pos,k);
	}
	return b;
}

int main(){
	char type[100];
	int z;
	node* root;
	root = NULL;

	node** rtroot = &root;

	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",&type);
		if(type[0] == 'i'){
			scanf("%d",&z);

			//ポインタの作成(ちなみにndの寿命(=スコープ)はfor文の内部)
			node* nd;
			//新しく挿入するオブジェクトを作成し，ndの指す先に指定
			nd = new node(z);

			insert(rtroot,nd);
		}else if(type[0] == 'p'){
			print(root);
		}else{
			scanf("%d",&z);

			if(find(root,z))cout <<"yes" <<endl;
			else cout <<"no" <<endl;
		}
	}

	return 0;
}