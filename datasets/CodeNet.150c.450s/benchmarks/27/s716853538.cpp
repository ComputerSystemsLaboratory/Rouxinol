#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

class node{
public:
  int v;
  node *p, *l, *r;
};

node *nil;

void pr(node *c){
  if(c == nil) return;
  cout << " " << c->v;
  pr(c->l);
  pr(c->r);
  return;
}
void in(node *c){
  if(c == nil) return;
  in(c->l);
  cout << " " << c->v;
  in(c->r);
  return;
}
void po(node *c){
  if(c == nil) return;
  po(c->l);
  po(c->r);
  cout << " " << c->v;
  return;
}

void solve(){
  int m; cin >> m;
  vector<string> s(m);
  vector<int> a(m);
  for(int i = 0; i < m; i++){
    cin >> s[i];
    if(s[i] == "insert"){
      cin >> a[i];
    }
  }

  node *root = nil;
  for(int i = 0; i < m; i++){
    if(s[i] == "insert"){
      int x = a[i];
      if(root == nil){
        node *y = new node;
        root = y;
        root->v = x;
        root->p = nil;
        root->l = nil;
        root->r = nil;
        continue;
      }
      bool left;
      node *c = root;
      node *p = nil;
      while(c != nil){
        p = c;
        if(x < c->v){
          left = true;
          c = c->l;
        }
        else{
          left = false;
          c = c->r;
        }
      }
      node *y = new node;
      y->p = p;
      if(left == true) p->l = y;
      else p->r = y;
      y->l = nil;
      y->r = nil;
      y->v = x;
    }
    else{
      in(root);
      cout << endl;
      pr(root);
      cout << endl;
    }
  }
}

int main(){
  solve();
  return 0;
}

