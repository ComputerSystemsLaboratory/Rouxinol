#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,m[3];
  cin>>a;
  for(int i=0;i<a;i++){
    cin >>m[0]>>m[1]>>m[2];
    sort(m,m+3);
    if(m[2]*m[2]==m[1]*m[1]+m[0]*m[0])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}