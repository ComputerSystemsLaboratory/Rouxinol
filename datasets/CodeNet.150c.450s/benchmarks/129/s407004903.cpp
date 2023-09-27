#include <iostream>
using namespace std;
int main() {
int r,c,n,num[101][101]={},row[101]={},line[101]={};
cin>>r>>c;
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
  cin>>n;
  num[i][j]=n;
  row[i]+=n;
  }
  num[i][c]=row[i];
}
for(int i=0;i<=c;i++){
  for(int j=0;j<r;j++){
  line[i]+=num[j][i];
  }
  num[r][i]=line[i];
}
for(int i=0;i<=r;i++){
  for(int j=0;j<=c;j++){
    if(j<c){ cout<<num[i][j]<<" ";
  }else{cout<<num[i][j]<<endl;}
  }
}
  return 0;
}