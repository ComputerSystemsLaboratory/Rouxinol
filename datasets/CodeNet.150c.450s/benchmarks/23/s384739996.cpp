#include<iostream>
using namespace std;
int main(){
  int f[3]={1,1,1},n;
  cin >> n;
  while(1<n--){
    f[2]=f[0]+f[1];
    f[0]=f[1];    
    f[1]=f[2];
  }
  cout<<f[2]<<endl;
  return 0;
}