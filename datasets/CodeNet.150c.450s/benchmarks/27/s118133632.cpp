#include <iostream>
#include <string>

using namespace std;

struct node {
  node *right,*left,*p;
  int key;
};

node *root;

void insert(int k) {
  node *y = NULL;
  node *x = root;
  node *z;

  z = (node*)malloc(sizeof(node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  while(x!=NULL) {
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->p = y;
  if(y==NULL) root = z;
  else {
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}

void preorder(node *u) {
  if (u == NULL) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

void inorder(node *u) {
  if (u == NULL) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}
  
int main(){
  int n; cin >> n;
  while(n--) {
    string s;
    cin >> s;
    if(s=="insert") {
      int k; cin >> k;
      insert(k);
    } else {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
  
  return 0;
}
