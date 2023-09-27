#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <functional>

#define rep(i,n) REP(i,0,n)
#define REP(i,a,n) for(int i = a; i < (int)n; i++)

using namespace std;

struct Node{
  int data;
  Node *parent,*left,*right;
};

Node *root;

bool find(int a){
  Node *r = root;
  while(r != NULL){
    if(r->data == a){
      return true;
    }
    else if(a < r->data){
      r = r->left;
    }
    else {
      r = r->right;
    }
  }
  return false;
}

void insert(int a){
  Node *root_tmp = root;
  Node *elem;

  elem = (Node *)malloc(sizeof(Node));
  elem->data = a;
  elem->left = NULL;
  elem->right = NULL;

  Node *prev = NULL;

    while(root_tmp != NULL){
      prev = root_tmp;
      if(elem->data < root_tmp->data){
	root_tmp = root_tmp->left;
      }
      else {
	root_tmp = root_tmp->right;
      }
    }

    elem->parent = prev;

    if(elem->parent == NULL){
      root = elem;
    }
    else{
        if(elem->parent->data < elem->data){
      elem->parent->right = elem;
    }
    else {
      elem->parent->left = elem;
    }
  }
}

void preorder(Node *u){
  if(u == NULL) return;
  cout << " " << u->data;
  preorder(u->left);
  preorder(u->right);
}

void inorder(Node *u){
  if(u == NULL) return;
  inorder(u->left);
  cout << " " << u->data;
  inorder(u->right);
}

 signed main(){
  int n;
  string command;
  int elem;

  cin >> n;
  rep(i,n){
    cin >> command;
    if(command == "insert"){
      cin >> elem;
      insert(elem);
    }
    else if(command == "find"){
      cin >> elem;
      if(find(elem)) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    else{
      inorder(root);
      cout << "\n";
      preorder(root);
      cout << "\n";
    }
  }
}

  

