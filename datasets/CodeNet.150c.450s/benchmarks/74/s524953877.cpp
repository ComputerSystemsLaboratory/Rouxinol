#include<iostream>
using namespace std;

int main()
{
  int n,m,C[20],T[50001];
  cin>>n>>m;
  for(int i=0;i<m;i++)cin>>C[i];

  for(int i=0;i<=n;i++)T[i]=100000;
  T[0]=0;

  for(int i=0;i<m;i++){
    for(int j=C[i];j<=n;j++){
      if(T[j]>T[j-C[i]]+1)T[j]=(T[j-C[i]]+1);
    }
  }
  cout<<T[n]<<endl;
  return 0;
}