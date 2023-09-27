#include<iostream>
using namespace std;

int main(){
  int r, c, sum=0;
  int e[100][100], sor[100]={}, soc[100]={};

  cin>>r>>c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>e[i][j];
      sor[i]+=e[i][j];
      soc[j]+=e[i][j];
    }
  }

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<e[i][j]<<" ";
    }
    sum+=sor[i];
    cout<<sor[i]<<endl;
  }
  for(int i=0;i<c;i++) cout<<soc[i]<<" ";
  cout<<sum<<endl;
  
  return 0;
}