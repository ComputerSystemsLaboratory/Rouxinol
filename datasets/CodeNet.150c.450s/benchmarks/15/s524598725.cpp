#include <bits/stdc++.h>
#define N 10001
#define M 501
using namespace std;

int main(){
  int n,m;
  int A[N],B[M];
  cin>>n;
  for(int i=0;i<n;i++)cin>>A[i];
  cin>>m;
  for(int i=0;i<m;i++)cin>>B[i];

  int cnt = 0;
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      if(B[i] == A[j]) cnt++,j=n;

  cout<<cnt<<endl;


  return 0;
}