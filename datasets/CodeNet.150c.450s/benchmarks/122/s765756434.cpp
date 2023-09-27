#include<bits/stdc++.h>
using namespace std;
using Int = long long;
#include<bits/stdc++.h>
using namespace std;
using Int = long long;
//BEGIN CUT HERE
template<typename T, typename E>
struct FGCE{
  typedef function<T(T, E)> F;
  typedef function<E(E, E)> G;
  typedef function<bool(T,T)> C;
  F f;
  G g;
  C c;
  E e;
  FGCE(F f,G g,C c,E e):f(f),g(g),c(c),e(e){}
};

template<typename T, typename E>
struct SkewHeap{
  using FS=FGCE<T, E>;
  FS fs;
  SkewHeap(FS fs):fs(fs){}

  struct Node{
    Node *l,*r;
    T val;
    E add;
    Node(T val,E add):val(val),add(add){l=r=NULL;}
  };

  void eval(Node *a){
    if(a->add==fs.e) return;
    if(a->l) a->l->add=fs.g(a->l->add,a->add);
    if(a->r) a->r->add=fs.g(a->r->add,a->add);
    a->val=fs.f(a->val,a->add);
    a->add=fs.e;
  }
  
  T top(Node *a){
    return fs.f(a->val,a->add);
  }
  
  Node* push(T v){
    return new Node(v,fs.e);
  }
  
  Node* meld(Node *a,Node *b){
    if(!a) return b;
    if(!b) return a;
    if(fs.c(top(a),top(b))) swap(a,b);
    eval(a);
    a->r=meld(a->r,b);
    swap(a->l,a->r);
    return a;
  }
  
  Node* pop(Node* a){
    eval(a);
    auto res=meld(a->l,a->r);
    free(a);
    return res;
  }
  
};
//END CUT HERE
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  using Heap=SkewHeap<int, int>;
  Heap::FS::F f=[](int a,int b){return a+b;};
  Heap::FS::G g=[](int a,int b){return a+b;};
  Heap::FS::C c=[](int a,int b){return a<b;};
  
  Heap::FS fs(f,g,c,0);

  Heap heap(fs);
  auto base=heap.push(0);
  
  string s;
  while(cin>>s,s!="end"){
    int x;
    if(s=="insert"){
      cin>>x;
      auto v=heap.push(x);
      base=heap.meld(base,v);
    }
    if(s=="extract"){
      x=heap.top(base);
      base=heap.pop(base);
      cout<<x<<endl;
    }
  }
  return 0;
}
/*
  verified on 2018/01/04
  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_9_C&lang=jp
*/

