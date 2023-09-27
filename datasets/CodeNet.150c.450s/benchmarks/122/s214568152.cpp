#include<bits/stdc++.h>
using namespace std;

const int MAXLOG=20;

struct node{
  int val,rank;
  vector<node*> p;
  node(){}
  node(int a){ val = a; rank=0; }
  void push( node *a ){
    p.push_back( a );
    rank++;
  }
};
struct binomialHeap{

  vector<node*> root;
  binomialHeap(){
    root.resize(MAXLOG,NULL);
  }

  node* mergeTree(node* p,node*q){
    if( p == NULL || q == NULL ) return p?p:q;
    if( p->val < q->val ){
      q->push(p);
      return q;
    } else {
      p->push(q);
      return p;
    }
  }

  void merge( const binomialHeap &ot ){
    node *nxp = NULL;
    for(int i=0;i<(int)root.size();i++){
      node *tree = mergeTree(root[i],nxp); nxp=NULL;      
      if( tree && tree->rank == i ) root[i] = tree;
      else { root[i] = NULL; nxp = tree; }
      tree = mergeTree(root[i],ot.root[i]);
      if( tree && tree->rank == i ) root[i] = tree;
      else { root[i] = NULL; if(!nxp) nxp = tree; }
    }
  }

  void push( int val ){
    node *np = new node(val);
    binomialHeap h; h.root[0] = np;
    merge(h);
  }
  void view(){
    for(int i=0;i<(int)root.size();i++) cout << i << ": " << (root[i]?root[i]->val:-INT_MAX) << endl;
  }
  int top(){
    int ret = -INT_MAX;
    for(int i=0;i<(int)root.size();i++)
      ret = max( ret, (root[i]?root[i]->val:-INT_MAX) );
    return ret;
  }
  void pop(){
    int id=0;
    for(int i=1;i<(int)root.size();i++)
      if( (root[id]?root[id]->val:-INT_MAX) < (root[i]?root[i]->val:-INT_MAX) ) id=i;
    binomialHeap h;
    for(int i=0;i<(int)root[id]->p.size();i++)
      h.root[root[id]->p[i]->rank] = root[id]->p[i];
    delete root[id];
    root[id]=NULL;
    merge(h);
  }
  
};





int main(){
  binomialHeap h;
  char buf[10];
  while( ~scanf("%s",buf) ){
    if( buf[2] == 'd' ) break;
    if( buf[0] == 'i' ){
      int a; scanf("%d",&a);
      h.push( a );
    } else {
      printf("%d\n",h.top());
      h.pop();
    }
  }  
  /*
  int n; cin >> n;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    cout << a<< endl;
    h.push( a );
  }
  for(int i=0;i<n;i++){
    cout << h.top() << " ";
    h.pop();
  }
  cout << endl;
  */
}