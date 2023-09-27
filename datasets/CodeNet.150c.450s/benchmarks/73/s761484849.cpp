#include<iostream>
#include<algorithm>
using namespace std;
 
 
// 262144 = 2^18
int tree[262144];
 
 
int dfs(int a,int b,int k,int l,int r){
  if(r<=a || b<=l)return 0;
  if(a<=l && r<=b)return tree[k];
  int m=(l+r)/2;
  return dfs(a,b,k*2+1,l,m)+dfs(a,b,k*2+2,m,r);
}
 
int getSum(int a,int b){
  // 131072 = 2^17
  return dfs(a,b,0,0,131072);
}
 
void update(int i,int x){
  // 131072 = 2^17
  i+=(131072-1);
  tree[i]+=x;
  while(i){
    i=(i-1)/2;
    tree[i]+=x;
  }
}
 
int n,q;
int a,b,c;
int main(){
  cin>>n>>q;

  for(int i=0;i<q;i++){
    cin>>a>>b>>c;
    if(a==1){
      cout<<getSum(b,c+1)<<endl;
    }else{
      update(b,c);
    }
  }
  return 0;
}