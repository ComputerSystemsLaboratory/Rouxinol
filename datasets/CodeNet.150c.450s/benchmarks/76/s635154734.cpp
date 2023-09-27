#include <iostream>
#include <set>
using namespace std;

struct Node{
  int k;
  Node *r, *l, *p;
};

Node *T;
Node *NIL;

void insert(int key){

  Node *x = T;
  Node *y = NIL;
  Node *z;
  z = new Node;
  z->k = key;
  z->l = z->r = NIL;

  while(x != NIL){
    y = x;
    if(z->k > x->k){
      x = x->r;
    }else if(z->k < x->k){
      x = x->l;
    }

  }
    z->p = y;

    if(y == NIL){
      T = z;
    }else if(z->k < y->k){
      y->l = z;
    }else if(z->k > y->k){
      y->r = z;
    }
}

void in_print(Node *r){
  if(r == NIL) return;
  in_print(r->l);
  cout << " " << r->k;
  in_print(r->r);
}

void pre_print(Node *r){
  if(r == NIL) return;
  cout << " " << r->k;
  pre_print(r->l);
  pre_print(r->r);
}


int main(){

  int n;
  set<int> s;
  cin >> n;

  for(int i = 0; i < n; i++){
    string str;
    int k;
    cin >> str;

    if(str == "insert"){
      cin >> k;
      s.insert(k);
      insert(k);
    }else if(str == "print"){
      in_print(T);
      cout << endl;
      pre_print(T);
      cout << endl;
    }else if(str == "find"){
      cin >> k;
      set<int>::iterator iti = s.find(k);
      if(iti == s.end()) cout << "no" << endl;
      else cout << "yes" << endl;
    }
  }



}