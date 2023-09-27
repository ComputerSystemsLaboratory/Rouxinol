#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)
#define Sort(v) sort((v).begin(), (v).end())
#define pb push_back
using veci = vector<int>;
using ll = long long;
struct node{
  ll key=-2000000050;
  struct node *right = NULL;
  struct node *left = NULL;
  struct node *parent = NULL;
};
#define nl NULL
node* root = {nl};
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
    if (u->left != nl) inorder(u->left);
    cout << " " << u->key;
    if (u->right != nl) inorder(u->right);
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
    else if (com == "print"){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
	}
  }
  return 0;
}
