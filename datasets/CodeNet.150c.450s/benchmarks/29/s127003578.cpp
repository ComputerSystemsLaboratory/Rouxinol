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

class node{
public:
  node* p;
  auto_ptr<node> n;
  int v;
  bool null;
  node(node* p_, node* n_, int v_): p(p_), n(n_), v(v_), null(false){}
  node(node* p_, node* n_): p(p_), n(n_), null(true){}
};

class list{
public:
  auto_ptr<node> f;
  node* l;
  list(): f(new node(NULL, NULL)), l(new node(NULL, NULL)){
    f->n.reset(l);
    l->p = f.get();
  }
  void insert(int v){
    node* p = f.get();
    node* n = f->n.release();
    f->n.reset(new node(p, n, v));
    n->p = f->n.get();
  }
  void del(node* pos){
    if(pos == NULL) return;
    node* pre = pos->p;
    node* next = pos->n.release();
    pre->n.reset(next);
    next->p = pre;
  }
  node* find(int x){
    for(node* cur = f->n.get(); cur != l; cur = cur->n.get()){
      if(cur->v == x) return cur;
    }
    return NULL;
  }
  bool empty(){
    return f->n.get() == l;
  }
  void delf(){
    if(empty()) return;
    del(f->n.get());
  }
  void dell(){
    if(empty()) return;
    del(l->p);
  }
  void print(){
    vector<int> buf;
    for(node* cur = f->n.get(); cur != l; cur = cur->n.get()){
      buf.push_back(cur->v);
    }
    for (size_t i = 0; i < buf.size()-1; i++) {
      cout << buf[i] << " ";
    }
    cout << buf.back() << endl;
  }
};

int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  list l;
  string buf;

  char com[20];
  int key;
  for (size_t i = 0; i < n; i++ ){
    scanf("%s%d", com, &key);
    if ( com[0] == 'i' ) {l.insert(key);}
    else if ( com[0] == 'd' ) {
      if (strlen(com) > 6){
	if ( com[6] == 'F' ) l.delf();
	else if ( com[6] == 'L' ) l.dell();
      } else {
	l.del(l.find(key));
      }
    }
  }
  l.print();
  return 0;
}