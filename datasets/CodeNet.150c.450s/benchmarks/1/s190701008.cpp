#include<iostream>
using namespace std;

int main()
{
  int n,A[100001],L[100001],k;

  cin>>n;
  for(int i=0;i<n;i++)cin>>A[i];
  L[0]=A[0];k=1;

  for(int i=1;i<n;i++){
    if(L[k-1]<A[i])L[k++]=A[i];
    else *lower_bound(L,L+k,A[i])=A[i];
  }
  cout<<k<<endl;
  
  return 0;
}