#include <iostream>
#include <cmath>
#include <algorithm>
#define N (1<<19)
using namespace std;
void add(int,int);
int sum(int,int,int,int,int);
int tree[N],n,N1=N/2;

int main(){
  int q,com,x,y;

  cin >> n >> q;
  while(q--){
    cin >> com >> x >> y;
    if(com==0) add(x,y);
    else{
      int r=sum(x,y+1,0,0,N1);
      cout << r << endl;
    }
  }
  return 0;
}
void add(int x,int y){
  x+=N1-1;
  tree[x]+=y;
  while(x>0){
    x=(x-1)/2;
    tree[x]=tree[x*2+1]+tree[x*2+2];
  }
}
int sum(int a,int b,int k,int l,int r){
  if(r<=a||b<=l) return 0;
  if(a<=l&&r<=b) return tree[k];
  else{
    int vl=sum(a,b,k*2+1,l,(l+r)/2);
    int vr=sum(a,b,k*2+2,(l+r)/2,r);
    return vl+vr;
  }
}