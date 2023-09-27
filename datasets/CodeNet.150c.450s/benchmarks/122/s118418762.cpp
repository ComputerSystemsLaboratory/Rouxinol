#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

template <typename T> class Heap{
  struct node_t{
    T val;
    int dep;
    node_t *l;
    node_t *r;

    node_t(T _val) : val(_val), dep(0), l(NULL), r(NULL){}
    ~node_t(){
      if(l != NULL) delete l;
      if(r != NULL) delete r;
    }
  };

  node_t *root;

  node_t *meld(node_t *a, node_t *b){
    if(a == NULL) return b;
    if(b == NULL) return a;
    if(a->val < b->val) swap(a, b);
    a->r = meld(a->r, b);
    if(a->l == NULL || a->l->dep < a->r->dep) swap(a->l, a->r);
    a->dep = (a->r == NULL ? 0 : a->r->dep) + 1;
    return a;
  }
  
public:
  Heap() : root(NULL) {}
  ~Heap() { delete root; }
  
  void meld(Heap &h){
    root = meld(this->root, h.root);
  }
  
  void insert(T val){
    root = meld(this->root, new node_t(val));
  }
  
  T min_element(){
    return root->val;
  }

  T pop(){
    T ret = min_element();
    root = meld(root->l, root->r);
    return ret;
  }
  
  bool empty(){
    return root == NULL;
  }
};

int main(){
  char com[10];
  int n;

  Heap<int> heap;
  
  while(scanf("%s", com) && com[2] != 'd'){
    if(com[0] == 'i'){
      scanf("%d", &n);
      heap.insert(n);
    }else{
      cout << heap.pop() << endl;
    }
  }

  return 0;
}