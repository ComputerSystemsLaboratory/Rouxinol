#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

struct Node{
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(k < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;
  if(y == NIL) root = z;
  else{
    if(k < y->key) y->left = z;
    else y->right = z;
  }
}

bool find(int k){
  Node *x = root;
  while(x != NIL && x->key != k){
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  if(x != NIL) return true;
  else return false;
}

void inorder(Node *u){
  if(u == NIL) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}

void preorder(Node *u){
  if(u == NIL) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n; cin >> n;
  rep(i, n){
    string com; cin >> com;
    if(com == "insert"){
      int k; cin >> k;
      insert(k);
    }
    else if(com == "find"){
      int k; cin >> k;
      cout << (find(k) ? "yes" : "no") << endl;
    }
    else if(com == "print"){
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }

  return 0;
}


