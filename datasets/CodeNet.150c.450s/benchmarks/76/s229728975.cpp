/*! if g++ -g alds_1_8_b.cpp -o alds_1_8_b.out; then ./alds_1_8_b.out < alds_1_8_b.test; fi
 */

#include <memory>
#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

class node;
typedef shared_ptr<node> nodep;

class node{
public:
  int id;
  nodep left, right, parent;
  node(int _id, nodep l, nodep r, nodep p): id(_id), left(l), right(r), parent(p) {}
  node(int i): id(i), left(NULL), right(NULL), parent(NULL) {}
};

nodep root(NULL);

void insert(int i){
  nodep z(new node(i));
  nodep y(NULL);
  nodep x = root;
  while(x.get() != NULL){
    y = x;
    if(z->id < x->id){
      x = x->left;
    } else{
      x = x->right;
    }
  }
  z->parent = y;
  if(y.get() == NULL){
    root = z;
  } else if(z->id < y->id){
    y->left = z;
  } else{
    y->right = z;
  }
}

void find(int i){
  nodep x = root;
  while(x.get() != NULL){
    if(x->id == i){
      cout << "yes" << endl;
      return;
    }
    if(i < x->id){
      x = x->left;
    } else{
      x = x->right;
    }
  }
  cout << "no" << endl;
}

void mid(nodep nd){
  if(nd.get() == NULL){
    return;
  }
  mid(nd->left);
  cout << " " << nd->id;
  mid(nd->right);
}

void pre(nodep nd){
  if(nd.get() == NULL){
    return;
  }
  cout << " " << nd->id;
  pre(nd->left);
  pre(nd->right);
}

int main(int argc, char *argv[]){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if(s[0] == 'i'){
      int id;
      cin >> id;
      insert(id);
    } else if(s[0] == 'f'){
      int id;
      cin >> id;
      find(id);
    }else{
      mid(root); cout << endl;
      pre(root); cout << endl;
    }
  }  
  return 0;
}