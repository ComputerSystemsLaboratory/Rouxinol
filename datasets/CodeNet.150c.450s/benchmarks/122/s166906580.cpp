#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int n;

struct Node{
  int key;
  Node *p, *l, *r;
};


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

void find(int k){
  Node *x = root;
  while(x != NIL){
    if(k == x->key) break;
    else if(k > x->key) x = x->r;
    else x = x->l;
  }

  if(x == NIL) cout << "no" << endl;
  else cout << "yes" << endl;
}

Node *getMinimum(Node *x){
  while(x->l != NIL){
    x = x->l;
  }
  return x;
}

Node *getsuccessor(Node *x){
  if(x->r != NIL) return getMinimum(x->r);

  Node *y = x->p;
  while(y != NIL && x == y->r){
    x = y;
    y = y->p;
  }
  return y;
}


void deletex(int k){
  Node *z = root;
  while(z->key != k){
    if(k > z->key) z = z->r;
    else z = z->l;
  }
  Node *y;

  if(z->l == NIL || z->r == NIL) y = z;
  else y = getsuccessor(z);

  Node *x;

  if(y->l != NIL) x = y->l;
  else x = y->r;

  if(x != NIL) x->p = y->p;

  if(y->p == NIL) root = x;
  else if(y == y->p->l) y->p->l = x;
  else y->p->r = x;

  if(y != z) z->key = y->key;
}

void maxheapify(int *A, int x){
  int largest, t;

  if(2 * x <= n && A[x] < A[2 * x]){
    largest = 2 * x;
  }
  else{
    largest = x;
  }
  if(2 * x + 1 <= n && A[largest] < A[2 * x + 1]){
    largest = 2 * x + 1;
  }

  if(x != largest){
    t = A[x];
    A[x] = A[largest];
    A[largest] = t;
    maxheapify(A, largest);
  }
}

void buildmaxheap(int *A){
  for(int i = n / 2; i >= 1; i--){
    maxheapify(A, i);
  }
}

void heapinsertmax(int *A, int i, int key){
  if(key < A[i]) cout << "error";

  A[i] = key;
  while(i > 1 && A[i] > A[i / 2]){
    int t = A[i];
    A[i] = A[i / 2];
    A[i / 2] = t;
    i = i / 2;
  }
}

void insert(int *A, int key){
  n++;
  A[n] = -1;
  heapinsertmax(A, n, key);
}




void heapextractmax(int *A){
  if(n < 1) cout << "error";

  cout << A[1] << endl;
  A[1] = A[n];
  n--;
  maxheapify(A, 1);
}




int main(){

  n = 0;

  int *A = new int[2000000000];

  string s;

  int x;

  while(1){
    cin >> s;
    if(s == "end") break;
    else if(s == "insert"){
      cin >> x;
      insert(A, x);
    }
    else if(s == "extract"){
      heapextractmax(A);
    }
  }



/*
  for(int i = 1; i <= n; i++){
    cout << "node " << i << ": key = " << A[i] << ", ";
    if(i / 2 >= 1){
      cout << "parent key = " << A[i / 2] << ", ";
    }
    if(i * 2 <= n){
      cout << "left key = " << A[i * 2] << ", ";
    }
    if(i * 2 + 1 <= n){
      cout << "right key = " << A[i * 2 + 1] << ", ";
    }
    cout << endl;
  }
*/



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

