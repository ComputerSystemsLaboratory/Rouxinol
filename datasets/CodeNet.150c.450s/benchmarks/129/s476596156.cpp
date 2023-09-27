#include<iostream>
using namespace std;

int main()
{
  int r,c,sum;
  int rc[101][101];
  cin>>r>>c;
  for(int i=0;i<r;i++){
    sum=0;
    for(int j=0;j<c;j++){
      cin>>rc[i][j];
      sum+=rc[i][j];
    }
    rc[i][c]=sum;
  }
  for(int j=0;j<c+1;j++){
    sum=0;
    for(int i=0;i<r;i++){
      sum+=rc[i][j];
    }
    rc[r][j]=sum;
  }
  for(int i=0;i<r+1;i++){
    for(int j=0;j<c;j++)cout<<rc[i][j]<<" ";
    cout<<rc[i][c]<<endl;
  }
  return 0;
}