#include<bits/stdc++.h>
//#define N 500000
using namespace std;
struct Node{
	int key;
	Node *right,*left,*par;
};
int n;
Node *root,*Nil;

void insert(int k){
	Node *y = Nil;
	Node *x = root;
	Node *z;

	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = Nil;
	z->right = Nil;
	while(x != Nil){
		y = x;
		if(z->key < x->key) x = x->left; //左の子へ移動
		else x = x->right; //右の子へ移動
	}
	z->par = y;
	
	if(y == Nil) root = z; //Tが空の場合
	else{
	  if(z->key < y->key) y->left = z; //zを左の子にする
	  else y->right = z; //zをyの右の子にする
	 }
	}
Node *find(Node *u,int k){
  while(u != Nil && u->key != k){
    if(k < u->key){
      u = u->left;
    }else{
      u = u->right;
    }
  }
  return u;
}

void inorder(Node *u){
  if(u == Nil) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}

void preorder(Node *u){
  if(u == Nil) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

int main(){
	int val=0;
	string str;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> str;
		if(str == "find"){
		  cin >> val;
		  Node *jud = find(root,val);
		  if(jud != Nil) cout << "yes" << endl;
		  else cout << "no" << endl;
		}else if(str == "insert"){
		  cin >> val;
		  insert(val);
		}else if(str == "print"){
		  inorder(root);
		  cout << endl;
		  preorder(root);
		  cout << endl;
		} 
	}
}

