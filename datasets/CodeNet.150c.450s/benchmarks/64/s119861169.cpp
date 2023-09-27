#include<cstdio>
 
int A[2000],n;
 
bool solve(int i,int m){
  if(i==n) return m==0;
  if( solve(i+1,m) ) return true;
  if( solve(i+1,m-A[i]) ) return true;
  return false;
 
}
 
int main(){
 
  int m,q;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&A[i]);
  scanf("%d",&m);
  for(int i=0;i<m;i++){
    scanf("%d",&q);
    if(solve(0,q)==true) printf("yes\n");
    else printf("no\n");
  }
  return 0;
}
