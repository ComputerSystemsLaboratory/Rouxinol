#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  string A[n];
  for(int i=0;i<n;i++) cin>>A[i];
  string C[n];
  for(int i=0;i<n;i++) C[i]=A[i];
  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(C[j][1]<C[j-1][1]){
	swap(C[j],C[j-1]);
      }
    }
  }
  string x[10],y[10];
  for(int i=0;i<n;i++){
    x[A[i][1]-'0']+=A[i][0];
    y[C[i][1]-'0']+=C[i][0];
  }
  ans=1;
  for(int i=0;i<10;i++) ans&=x[i]==y[i]; 
  for(int i=0;i<n;i++) cout<<C[i]<<" \n"[i==n-1];
  cout<<(ans?"Stable":"Not stable")<<endl;
  
  for(int i=0;i<n;i++) C[i]=A[i];
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(C[j][1]<C[minj][1]){
	minj=j;
      }
    }
    if(i!=minj) swap(C[i],C[minj]);
  }
  
  for(int i=0;i<10;i++) x[i]=y[i]="";
  for(int i=0;i<n;i++){
    x[A[i][1]-'0']+=A[i][0];
    y[C[i][1]-'0']+=C[i][0];
  }
  ans=1;
  for(int i=0;i<10;i++) ans&=x[i]==y[i]; 
  for(int i=0;i<n;i++) cout<<C[i]<<" \n"[i==n-1];
  cout<<(ans?"Stable":"Not stable")<<endl;
  
  return 0;
}