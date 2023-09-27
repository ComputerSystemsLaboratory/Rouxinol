#include <iostream>

using namespace std;

struct Node{
  int key;
  Node *pr;
  Node *rt;
  Node *lt;
};

Node *root,*nil;
  
void insert(int k){
  Node *x=root, *y=nil, *z;

  z = new Node;
  z->key=k;
  z->rt=z->lt=nil;

  while(x!=nil){
    y=x;
    if(z->key < x->key) x=x->lt;
    else x=x->rt;
  }
  z->pr = y;

  if(y==nil) root=z;
  else if(z->key < y->key) y->lt=z;
  else y->rt=z;
}

void preo(Node *r){
  if(r==nil) return;
  cout << " " << r->key;
  preo(r->lt);
  preo(r->rt);  
}

void ino(Node *r){
  if(r==nil) return;
  ino(r->lt);
  cout << " " << r->key;
  ino(r->rt);
}

int main(){
  int m,k;
  string str;

  cin >> m;
  for(int i=0;i<m;i++){
    cin >> str;
    if(str=="insert"){
      cin >> k;
      insert(k);
    }
    else if(str=="print"){
      ino(root);
      cout << endl;
      preo(root);
      cout << endl;
    }
  }

  return 0;
}