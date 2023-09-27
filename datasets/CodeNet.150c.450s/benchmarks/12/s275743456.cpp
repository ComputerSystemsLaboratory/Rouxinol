#include <iostream>
using namespace std;

int main(){
  int a,n[260];
  cin>>a;
  for(int i=1;i<=a;i++){
    cin>>n[i];
  }
  cout<<"node 1: key = "<<n[1]<<", left key = "<<n[2]<<", right key = "<<n[3]<<", "<<endl;
  for(int i=2;i<=a;i++){
    cout<<"node "<<i<<": key = "<<n[i]<<", parent key = "<<n[i/2]<<", ";
    if(i*2<=a)cout<<"left key = "<<n[i*2]<<", ";
    if(i*2+1<=a)cout<<"right key = "<<n[i*2+1]<<", ";
    cout<<endl;
  }
  return 0;
}