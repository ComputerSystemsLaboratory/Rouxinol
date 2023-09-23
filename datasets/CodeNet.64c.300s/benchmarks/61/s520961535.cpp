#include<iostream>
using namespace std;

int main(){
  int r,c;
  int table[105][105]={{0}};
  int sum[2][105]={{0}};
  cin>>r>>c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>table[i][j];
      sum[0][j] += table[i][j];
      sum[1][i] += table[i][j];
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<table[i][j]<<" ";
    }
    cout<<sum[1][i]<<endl;
  }
  int s = 0;
  for(int i=0;i<c;i++){
    cout<<sum[0][i]<<" ";
    s += sum[0][i];
  }
  cout<<s<<endl;
  return 0;
}