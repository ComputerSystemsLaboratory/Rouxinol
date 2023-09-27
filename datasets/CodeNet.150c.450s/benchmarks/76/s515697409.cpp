#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
struct node
{
	struct node *parent,*left,*right;
	int key;
};
node NIL;
node *nil = &NIL;
node *root = nil;
void setdepth(node*,int);
node* getroot(node*);
void inorder(node*);
void preorder(node*);
void insert(int);
void print();
node *find(int);

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		if(s == "insert"){
			int key;
			cin >> key;
			insert(key);
		}
		else if(s == "print") print();
		else if(s == "find"){
			int key;
			cin >> key;
			if(find(key) != nil) cout << "yes" <<endl;
			else cout << "no" << endl;
		}
	}

	
	return 0;

}

node* getroot(node* x){
	int i=0;
	while(x->parent != nil){
		x = x->parent;
		i++;
		if(i >= 100000){
			cerr << "ERROR:GETROOT" << endl;
			break;
		}
	}
	//cerr << "root: " << x->key<< endl;
	return x;
}

void printchildren(node* x){

}

void insert(int key){
	node *x;
	x = (node*)malloc(sizeof(node));
	x->key = key;
	x->parent = x->left = x->right  = nil;
	if(root == nil) root = x;
	else{
		node* cur = root;
		node* prev = cur;
		bool isleft = true;
		while(cur != nil){
			prev = cur;
			if(key <= cur->key){
			 	isleft=true;
			 	cur = cur->left;
			}
			else {
				cur = cur -> right;
				isleft = false;
			}
		}
		x->parent = prev;
		if(isleft) prev->left = x;
		else prev -> right = x;
	}
}

void inorder(node *x){
	if(x->left != nil) inorder(x->left);
	cout << " " << x->key;
	if(x->right != nil) inorder(x->right);
}

void preorder(node *x){
	if(x == nil) return;
	else{
		cout << " " << x->key;
		preorder(x->left);
		preorder(x->right);
	}
}

void print(){
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
}

node* find(int key){
	node *x = root;
	while(x != nil && x->key != key){
		if(key < x->key) x = x->left;
		else x = x->right;
	}
	return x;
}