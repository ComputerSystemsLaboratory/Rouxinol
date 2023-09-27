#include<cstdio>
#include<algorithm>
using namespace std;

struct segtree{
  int n;
  int data[262143];
  segtree(int _n){
    n = 1;
    while(n<_n) n *= 2;
    fill(data,data+2*n-1,0);
  }
  void add(int i,int x){
    i += n-2;
    data[i] += x;
    while(i>0){
      i = (i-1)/2;
      data[i] += x;
    }
  }
  int getSum(int s,int t){
    return getSum(s-1,t,0,0,n);
  }
  int getSum(int a,int b,int k,int l,int r){
    if(a<=l&&r<=b) return data[k];
    else if(a>=r||b<=l) return 0;
    else{
      int vl = getSum(a,b,2*k+1,l,(l+r)/2);
      int vr = getSum(a,b,2*k+2,(l+r)/2,r);
      return vl + vr;
    }
  }
};

int main(){
  int n,q;
  scanf("%d%d",&n,&q);
  segtree st(n);
  for(int i=0;i<q;i++){
    int cmd,x,y;
    scanf("%d%d%d",&cmd,&x,&y);
    if(cmd==0) st.add(x,y);
    else if(cmd==1) printf("%d\n",st.getSum(x,y));
  }
  return 0;
}