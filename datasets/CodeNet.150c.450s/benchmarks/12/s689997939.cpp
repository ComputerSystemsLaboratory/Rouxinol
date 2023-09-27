#include<bits/stdc++.h>
using namespace std;


int main(){
  int h,t[300];
  cin>>h;
  for(int i=1;i<=h;i++)cin>>t[i];
  for(int i=1;i<=h;i++){
    cout<<"node "<<i<<": key = "<<t[i]<<", ";
    if(i!=1)cout<<"parent key = "<<t[i/2]<<", ";
    if(i*2<=h)cout<<"left key = "<<t[i*2]<<", ";
    if(i*2+1<=h)cout<<"right key = "<<t[i*2+1]<<", ";
    cout<<endl; 
  }
  return 0;
}