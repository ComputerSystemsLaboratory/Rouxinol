#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
  int n,p;
  while(cin>>n>>p, n!=0 || p!=0){
    int A[n];
    memset(A, 0, sizeof(A));
    int t=0;
    while(1){
      if(p==0){
        p=A[t];
        A[t]=0;
      } else {
        p-=1;
        A[t]+=1;
      }
      int f=1;
      rep(i,n) {
        if(t!=i && A[i]!=0) f=0;
      }
      if(p==0 && f) break;
      t=(t+1)%n;
    }
    cout<<t<<endl;
  }
  return 0;
}