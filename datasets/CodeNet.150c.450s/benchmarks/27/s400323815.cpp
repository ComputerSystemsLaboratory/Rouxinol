#include<bits/stdc++.h>
using namespace std;
#define int long long

struct node{
  int key;
  node *parent,*left,*right;
};
node *root,*nil;

void insert(int k){
  node *p;
  p = (node *)malloc(sizeof(node));
  p->key = k;
  p->left = nil;
  p->right = nil;

  node *v = root,*u = nil;
  //if(v == nil) return;
  while(v != nil){
    u = v;
    if(p->key < v->key) v = v->left;
    else v = v->right;
  }
  p->parent = u;
  if(u == nil) root = p;
  else {
    if(p->key < u->key) u->left = p;
    else u->right = p;
  }
}

void preorder(node *u){
  if(u == nil) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

void inorder(node *u){
  if(u == nil) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int m; cin >> m;
  for(int i = 0; i < m; i++){
    string s; cin >> s;
    if(s[0] == 'p'){
      inorder(root);
      cout << '\n';
      preorder(root);
      cout << '\n';
      continue;
    }
    int k; cin >> k;
    insert(k);
  }

  return 0;
}

