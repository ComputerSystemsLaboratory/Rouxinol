#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
  int n,r;
  while(cin>>n>>r,n!=0||r!=0){
  int A[n];
  rep(i,n){
    A[i]=n-i;
  }
  rep(i,r){
    int p,c;
    cin>>p>>c;
    vector<long long> v(c);
    for(int j=p-1;j<p+c-1;j++){
      v[j-(p-1)]=A[j];
    }
    for(int j=p-2;j>=0;j--){
      A[j+c]=A[j];
    }
    for(int j=0;j<c;j++){
      A[j]=v[j];
    }
  }
  cout<<A[0]<<endl;
  }
 return 0;
}