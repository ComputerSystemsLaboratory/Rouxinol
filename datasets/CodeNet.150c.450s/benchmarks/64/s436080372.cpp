#include <iostream>
using namespace std;
#define MAX 20

int A[MAX],n;

int solve(int i,int m){
  if(m==0) return 1;
  if(i>=n) return 0;
  int res=solve(i+1,m)||solve(i+1,m-A[i]);
  return res;
}

int main(){
  int m,key;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>key;
    if(solve(0,key)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}