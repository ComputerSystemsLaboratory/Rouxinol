#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class segtree{
public:
  int Node;
  vector<int> table;
  segtree(int);
  int ope(const int,const int);
  void update(int index,const int value){ // index is 0-indexed.
    index += Node; // query function
    table[index] += value;
    while(index > 0){
      index /= 2;
      table[index] += value;
    }
  }
  int find(int l, int r);
};
int segtree::find(int l,int r){ // l,r is 0-indexed.
    if(l == r) return table[r+Node];
    l += Node; r += Node;
    int ans = 0;
    for(; l <= r;l >>=1, r >>=1){
      if(r == l){ans+=table[l]; return ans;}
      if(r%2 == 0) ans+=table[r],--r;
      if(l%2) ans+=table[l],++l;
    }
    return ans;
}
segtree::segtree(int Max_Node){  // initialize
  Node = 2;
  while(Node < Max_Node)
    Node *= 2;
  table.resize(2*Node);
  for(int i = Node;i < Node*2; i++)
    table[i] = 0; // initialize
  for(int i= Node-1; i > 0; i--)
    table[i] = ope(table[i*2],table[i*2+1]);
}

int segtree::ope(const int a,const int b){
  return min(a,b);
}

int main () {
  int n,q;cin>>n>>q;
  segtree st(n);
  for(int i=0;i<q;++i){
    int c,x,y;cin>>c>>x>>y;
    if(c==0)
      st.update(x,y);
    else
      cout<<st.find(x,y)<<endl;
  }
}