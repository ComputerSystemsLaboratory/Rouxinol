#include <bits/stdc++.h>
using namespace std;
int INF=100000000;

struct SegmentTree{
  private:
  int n;  vector<int> node;
  
  public:
  SegmentTree(vector<int> v){
    int sz=v.size();
    n=1; while(n<sz)n*=2;
    node.resize(2*n-1,0);
    for(int i=0;i<sz;i++)node[i+n-1]=v[i];
    for(int i=n-2;i>=0;i--)node[i]=node[2*i+1]+node[2*i+2];
  }
  void update(int x,int val){
    x+=(n-1);
    node[x]+=val;
    while(x>0){
      x=(x-1)/2;
      node[x]=node[2*x+1]+node[2*x+2];
    }
  }
  int getmin(int a,int b,int k=0,int l=0,int r=-1){
    if(r<0)r=n;
    if(r<=a || b<=l)return 0;
    if(a<=l && r<=b)return node[k];
    int vl=getmin(a,b,2*k+1,l,(l+r)/2);
    int vr=getmin(a,b,2*k+2,(l+r)/2,r);
    return vl+vr;
  }
};

int main(){
  int n,q;
  cin >> n >> q;
  SegmentTree seg(vector<int>(n,0));
  for(int i=0;i<q;i++){
    int c,x,y;
    cin >> c >> x >> y;
    if(c==0){seg.update(x-1,y);}
    else{cout << seg.getmin(x-1,y) << endl;}
  }
}
