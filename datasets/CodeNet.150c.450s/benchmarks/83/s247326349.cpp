#include<iostream>
using namespace std;

int main()
{
  int N,W;
  int v[101],w[101],T[101][10001];

  cin>>N>>W;
  for(int i=1;i<N+1;i++)cin>>v[i]>>w[i];

  for(int i=0;i<W+1;i++)T[0][i]=0;
  for(int i=1;i<N+1;i++)T[i][0]=0;

  for(int i=1;i<=N;i++){
    for(int j=1;j<=W;j++){
      if(j>=w[i]){
	if(T[i-1][j]<=(T[i-1][j-w[i]]+v[i]))T[i][j]=(T[i-1][j-w[i]]+v[i]);
	else T[i][j]=T[i-1][j];
      }
      else T[i][j]=T[i-1][j];
    }
  }
  cout<<T[N][W]<<endl;
  return 0;
}