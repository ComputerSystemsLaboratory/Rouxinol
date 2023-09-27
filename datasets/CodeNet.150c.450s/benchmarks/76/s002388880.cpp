#include<bits/stdc++.h>
using namespace std;
/*
alias g='g++ -std=c++17 -O2 pra.cpp'
alias cg='g++ -std=c++17 -O2 -g pra.cpp'
alias s='g++ -std=c++17 -O2 -g subpra.cpp'
alias a='./a.out'
cd programming
cd cpp
cd practice

*/
#define rep(i, n) for(int i=0; i<(n); i++)
#define Sort(v) sort((v).begin(), (v).end())
#define pb push_back
using veci = vector<int>;
using ll = long long;
struct node{
  ll key;
  struct node *right;
  struct node *left;
  struct node *parent;
};
node* root = {NULL};
void insert(ll key){
  node* n = new node();
  n->key = key;//新しいノードのポインタnからそのノードのメンバにアクセス
  node* x = root;
  node* y = {NULL};
  while (x != NULL){//見る箇所を移動
    y = x;
    if (x->key >= n->key){
      x = x->left;
    }
    else x = x->right;
  }
  if (y == NULL) root = n;
  else if (y->key >= n->key) y->left = n;
  else y->right = n;
}
void preorder(node* u){//根、左、右
    cout << " " << u->key;//アクセス先が構造体変数ならドット演算子を、構造体変数へのポインターならアロー演算子を使う
    if (u->left != NULL) preorder(u->left);
    if (u->right != NULL) preorder(u->right);
}
void inorder(node* u){//左、根、右
    if (u->left != NULL) inorder(u->left);//左に行けるまで行く
    cout << " " << u->key;//いけるとこまで行ったら根を出力
    if (u->right != NULL) inorder(u->right);//次は右、これが終われば関数終了で一個前の続きをやる
}
bool treeSearch(node* root, ll x){
	bool flag=false;
	node* u = root;
	while (u != NULL){
		if (u->key == x) return true;
		else if (u->key < x){
			u = u->right;
		}
		else u = u->left;
	}
	return false;
}
int main(){
  int n, i; cin >> n;
  ll x;
  string com;
  for ( i = 0; i < n; i++ ){
    cin >> com;
    if (com == "insert"){
      cin >> x;
      insert(x);
    }
	if (com == "find" ){
      cin >> x;
      if (treeSearch(root, x)) printf("yes\n");
      else printf("no\n");
    }
    else if (com == "print"){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
	}
  }
  return 0;
}
