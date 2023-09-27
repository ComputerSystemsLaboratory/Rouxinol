#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n,array[101],m[101][101];
void matrixchainorder(){
  int i,j,l,k;
  for(i=0;i<n+1;i++)
    for(j=0;j<n+1;j++)
      m[i][j]=2000000000;
  for(i=0;i<n+1;i++)m[i][i]=0;
  for(l=2;l<=n;l++){
    for(i=1;i<=n-l+1;i++){
      j=i+l-1;
      for(k=i;k<=j-1;k++){
	m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+array[i-1]*array[k]*array[j]);
      }
    }
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>array[i]>>array[i+1];
  matrixchainorder();
  cout<<m[1][n]<<endl;

  return 0;
}

