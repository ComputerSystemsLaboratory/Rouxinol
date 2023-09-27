/*! if g++ -g alds_1_8_a.cpp -o alds_1_8_a.out; then ./alds_1_8_a.out < alds_1_8_a.test; fi
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
    } else{
      mid(root); cout << endl;
      pre(root); cout << endl;
    }
  }  
  return 0;
}