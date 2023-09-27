#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

struct Node{
  int key;
  Node *p, *l, *r;
};

int n;

Node *NIL, *root;

void preorder(Node *u){
  if(u == NIL) return;
  cout << ' ' << u->key;
  preorder(u->l);
  preorder(u->r);
}

void inorder(Node *u){
  if(u == NIL) return;
  inorder(u->l);
  cout << ' ' << u->key;
  inorder(u->r);
}

/*void Postorder(int u){
  if(u == -1) return;
  Postorder(T[u].l);
  Postorder(T[u].r);
  cout << ' ' << u;
}
*/

void insert(int k){
  Node *y = NIL;
  Node *x = root;

  Node *z;

  z = new Node[1];

  z->key = k;
  z->p = NIL;
  z->r = NIL;
  z->l = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->l;
    else x = x->r;
  }

  z->p = y;

  if(y == NIL){
    root = z;
  }
  else if(z->key < y->key) y->l = z;
  else y->r = z;

}


int main(){


  int x;

  string s;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> s;
    if(s ==  "insert"){

      cin >> x;

      insert(x);
    }

    else{
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }


/*  for(int k = 0; k < n; k++){

    cin >> x;

    for(int i = 0; i < 2; i++){
      cin >> y;
      T[y].parent = x;
      if(i == 0){
      T[x].l = y;
      }
      else{
        T[x].r = y;
      }
    }
  }

/*
  cout << "Inorder" << endl;
  Inorder(r);
  cout << endl;


  cout << "Preorder" << endl;
  Preparse(r);
  cout << endl;


  cout << "Postorder" << endl;
  Postorder(r);
  cout << endl;
*/

  return 0;
}

