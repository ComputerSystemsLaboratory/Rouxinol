#include<iostream>
using namespace std;

int main(){
  int A[251],n;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>A[i];
  for(int i=1;i<=n;i++){
    cout<<"node "<<i<<": key = "<<A[i]<<", ";
    if(i/2>0 &&i/2<=n)cout<<"parent key = "<<A[i/2]<<", ";
    if(2*i<=n)cout<<"left key = "<<A[2*i]<<", ";
    if(2*i+1<=n)cout<<"right key = "<<A[2*i+1]<<", ";
    cout<<endl;
  }
  return 0;
}