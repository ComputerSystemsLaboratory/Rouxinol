#include<iostream>
using namespace std;

int main()
{
  int n,m;
  int M[100][100],b[100],bond[100]={};
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>M[i][j];
    }
  }
  for(int i=0;i<m;i++)cin>>b[i];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      bond[i]+=M[i][j]*b[j];
    }
  }
  for(int i=0;i<n;i++)cout<<bond[i]<<endl;
  return 0;
}

