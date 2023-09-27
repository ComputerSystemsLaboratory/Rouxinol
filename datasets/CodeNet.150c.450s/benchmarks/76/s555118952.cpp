#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
const int inf=1000000001;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

class Tree{
public:
	Tree(){}
	int key;
	Tree *parent;
	Tree *left;
	Tree *right;
};

Tree *root,*NIL;

void insert(int key);
void inorder(Tree *t);
void preorder(Tree *t);
void search(int key);

int main(){
	int m,i;
	cin>>m;
	string order;
	int key;
	loop(i,0,m){
		cin>>order;
		if(order[0]=='i'){
			cin>>key;
			insert(key);
		}else if(order[0]=='p'){
			inorder(root);
			cout<<endl;
			preorder(root);
			cout<<endl;
		}else{
			cin>>key;
			search(key);
		}
	}
}


void search(int key){
	Tree *x=root;
	while(x!=NIL){
		if(x->key==key){
			cout<<"yes"<<endl;
			return;
		}else if((x->key)>key){
			x=x->left;
		}else{
			x=x->right;
		}
	}
	cout<<"no"<<endl;
}

void insert(int key){
	Tree *x=root,*y=NIL,*z;
	z=(Tree *)malloc(sizeof(Tree));
	z->key=key;
	z->left=NIL;
	z->right=NIL;
	while(x!=NIL){
		y=x;
		if(z->key < x->key){
			x=x->left;
		}else{
			x=x->right;
		}
	}
	z->parent=y;
	if(y==NIL){
		root=z;
	}else if(z->key < y->key){
		y->left=z;
	}else{
		y->right=z;
	}
}

void preorder(Tree *t){
	if(t==NIL){
		return;
	}
	cout<<" "<<t->key;
	preorder(t->left);
	preorder(t->right);
}


void inorder(Tree *t){
	if(t==NIL){
		return;
	}
	inorder(t->left);
	cout<<" "<<t->key;
	inorder(t->right);
}