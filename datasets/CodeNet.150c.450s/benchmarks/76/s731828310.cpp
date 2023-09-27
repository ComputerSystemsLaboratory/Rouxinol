#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
  ll key;
  Node *p;
  Node *left;
  Node *right;
  Node(ll k){
    key = k;
    p = left = right = NULL;
  }
};

void fr(Node* n){
  if(n == NULL) return;
  fr(n->left);
  if(n->left != NULL)
    delete n->left;
  fr(n->right);
  if(n->right != NULL)
    delete n->right;
}

void inorder(Node* n){
  if(n == NULL){
    return;
  }
  inorder(n->left);
  cout << " " << n->key;
  inorder(n->right);
  return;
}

void preorder(Node* n){
  if(n == NULL){
    return;
  }
  cout << " " << n->key;
  preorder(n->left);
  preorder(n->right);
  return;
}

void insert(Node* &T, Node* z){
  Node* y = NULL;
  Node* x = T;
  while(x != NULL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }
  z->p = y;

  if(y == NULL){
    T = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }
}

Node* find(Node* T, ll k){
  Node* res = NULL;
  Node* x = T;
  while(x != NULL){
    if(x->key == k){
      res = x;
      break;
    }
    if(k < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }
  return res;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int m;
  Node* T = NULL;
  cin >> m;
  while(m--){
    string str; cin >> str;
    if(str == "print"){
      inorder(T);
      cout << endl;
      preorder(T);
      cout << endl;
    }else if(str == "find"){
      ll k;
      cin >> k;
      if(find(T, k) != NULL){
        cout << "yes" << endl;
      }else{
        cout << "no" << endl;
      }
    }else{
      ll k; cin >> k;
      Node* kn = new Node(k);
      insert(T, kn);
      /*
      if(kn->p != NULL) cout << kn->p->key << endl;
      else if(kn->left != NULL) cout << "LEFT " << kn->left->key << endl;
      else if(kn->right != NULL) cout << "RIGHT " << kn->right->key << endl;
      */
    }
  }
  fr(T);
  return 0;
}