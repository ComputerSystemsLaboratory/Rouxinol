#include<bits/stdc++.h>
using namespace std;

int n;
int num[101][101];
int p[101];

void matrixChainMultiplication(){
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      num[i][j]=INT_MAX;
      for(int k=i;k<=j-1;k++)
	num[i][j]=min(num[i][j],num[i][k]+num[k+1][j]+p[i-1]*p[k]*p[j]);
    }   
  }
  cout<<num[1][n]<<endl;
}

int main(){
  cin>>n;
  for(int i=1;i<=n;i++) cin>>p[i-1]>>p[i];
 
  for(int i=1;i<=n;i++)num[i][i]==0;
  
  matrixChainMultiplication();
      
  return 0;
}