#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#define INTINF 2147483647
#define LLINF 9223372036854775807
typedef long long ll;
using namespace std;

struct Node{
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;


void insert(int num){
  Node *y = NIL;
  Node *x = root; //start
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = num;
  z->left = NIL;
  z->right = NIL;

  while ( x!=NIL ) {
    y=x; //おや
    if ( z->key < x->key ) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;
  if (y==NIL) { //最初
    root = z;
  }else{
    if( z->key < y->key ){  //親より小さければ左につく
      y->left = z;
    }else{
      y->right = z;
    }
  }

}


void print_in(Node *u){
  if(u==NIL) return;
  print_in(u->left);
  std::cout << " " << u->key;
  print_in(u->right);
}


void print_pre(Node *u){
  if(u==NIL) return;
  std::cout << " " << u->key;
  print_pre(u->left);
  print_pre(u->right);
}


int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int k, num; std::cin >> k;
  string command;
  for (size_t i = 0; i < k; i++) {
    std::cin >> command;
    if (command=="insert") {
      std::cin >> num;
      insert(num);
    }else{
      print_in(root);
      std::cout << '\n';
      print_pre(root);
      std::cout << '\n';
    }
  }

  return 0;
}

