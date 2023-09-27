#include <iostream>

using namespace std;

bool solve(int A[],int n,int idx,int m){
  if(m==0){
    return true;
  }else if(m<0){
    return false;
  }
  if(idx<n){
    return solve(A,n,idx+1,m-A[idx]) ||
           solve(A,n,idx+1,m);
  }else if(idx==n){
    return false;
  }
}

int main(){
  int n; cin>>n;
  int A[n]; for(int i=0;i<n;i++) cin>>A[i];
  int q; cin>>q;
  
  for(int i=0;i<q;i++){
    int m; cin>>m;
    if(solve(A,n,0,m)){
      cout<<"yes"<<endl;
    }else{
      cout<<"no"<<endl;
    }
  }
}