#include<iostream>
#include<algorithm>
using namespace std;
#define N 131072
int tree[N*2];
int getsum(int a,int b,int k,int l,int r){
  if(r<=a||b<=l)return 0;
  if(a<=l&&r<=b)return tree[k];
  int m=(l+r)/2;
  return getsum(a,b,k*2+1,l,m)+getsum(a,b,k*2+2,m,r);
}
void add(int a,int b){
  a+=N-1;
  tree[a]+=b;
  while(a){
    a=(a-1)/2;
    tree[a]+=b;
  }
}
int main(){
int n,q;
int c,a,b;
  cin>>n>>q;
  for(int i=0;i<q;i++){
    cin>>c>>a>>b;
    a--;
    if(c==1) cout<<getsum(a,b,0,0,N)<<endl;
    else add(a,b);
  }
  return 0;
} 