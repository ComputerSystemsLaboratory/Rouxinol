#include<bits/stdc++.h>
using namespace std;
using Int = long long;
#include<bits/stdc++.h>
using namespace std;
using Int = long long;
//BEGIN CUT HERE
template<typename T, typename E>
struct SkewHeap{
  typedef function<T(T, E)> F;
  typedef function<E(E, E)> G;
  SkewHeap *l,*r;
  T val;
  F &f;
  G &g;
  E add,e;
  
  SkewHeap(T val,F &f,G &g,E e):val(val),f(f),g(g),add(e),e(e){l=r=NULL;}
  
  void eval(){
    if(add==e) return;
    if(l) l->add=g(l->add,add);
    if(r) r->add=g(r->add,add);
    val=f(val,add);
    add=e;
  }
  
  T top(){
    return f(val,add);
  }
  
};

template<typename T, typename E>
SkewHeap<T, E>* meld(SkewHeap<T, E> *a,SkewHeap<T, E> *b){
  if(!a) return b;
  if(!b) return a;
  if(a->top() > b->top())  swap(a,b);
  a->eval();
  a->r=meld(a->r,b);
  swap(a->l,a->r);
  return a;
}

template<typename T, typename E>
SkewHeap<T, E>* pop(SkewHeap<T, E>* a){
  a->eval();
  auto res=meld(a->l,a->r);
  free(a);
  return res;
};
//END CUT HERE

signed main(){
  using Heap = SkewHeap<int, int>;
  Heap::F f=[](int a,int b){return a+b;};
  Heap::G g=[](int a,int b){return a+b;};
  Heap* base = new Heap(0,f,g,0);
  string s;
  while(cin>>s,s!="end"){
    int x;
    if(s=="insert"){
      cin>>x;
      base=meld(base, new Heap(-x,f,g,0));
    }
    if(s=="extract"){
      x=base->top();
      base=pop(base);
      cout<<-x<<endl;
    }
  }
  return 0;
}
/*
  verified on 2018/01/04
  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_9_C&lang=jp
*/

