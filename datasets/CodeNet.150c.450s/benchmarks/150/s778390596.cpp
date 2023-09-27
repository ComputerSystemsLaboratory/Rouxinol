#include<bits/stdc++.h>
#define N 2000001
#define M 10001
using namespace std;
int n,A[N],B[N],C[M];

void CountingSort(){
  for(int i=1;i<=n;i++)C[A[i]]++;
  for(int i=1;i<M;i++)C[i]+=C[i-1];
  for(int i=n;i>=1;i--)
    B[C[A[i]]]=A[i],C[A[i]]--;
}

int main(){
  cin>>n;
  for(int i=1;i<=n;i++)cin>>A[i];
  CountingSort();
  for(int i=1;i<=n;i++){
    if(i!=1)cout<<' ';
    cout<<B[i];
  }
  cout<<endl;
  return 0;
}