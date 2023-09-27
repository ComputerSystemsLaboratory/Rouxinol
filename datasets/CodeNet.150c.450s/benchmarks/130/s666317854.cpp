#include <iostream>
using namespace std;
int main() {
int n,m,a[100][100]={},b[100]={},c[100]={};
cin>>n>>m;
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>a[i][j];
  }
}
for(int j=0;j<m;j++){
  cin>>b[j];
}
for(int i=0;i<n;i++){
  for(int j=m-1;j>=0;j--){
    c[i]+=b[j]*a[i][j];
  }
}
for(int i=0;i<n;i++){
  cout<<c[i]<<endl;
}
  return 0;
}