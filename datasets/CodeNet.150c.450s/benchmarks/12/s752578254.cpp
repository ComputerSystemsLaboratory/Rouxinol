#include<iostream>
using namespace std;
#define H 251
#define X 2000000001
int main(){
  int h,a[H],i;
  cin>>h;
  for(i=1;i<=H;i++)a[i]=X;
  for(i=1;i<=h;i++){
    cin>>a[i];
  }

  for(i=1;i<=h;i++){
    cout<<"node "<<i<<": key = "<<a[i];
    if(i==1){
      if(h>=2)cout<<", left key = "<<a[i+1];
      if(h>2)cout<<", right key = "<<a[i+2]<<", "<<endl;    
      continue;
    }
    cout<<", parent key = "<<a[i/2];
    if(a[2*i]!=X && 2*i<=H){
      cout<<", left key = "<<a[2*i];
    }
    if(a[2*i+1]!=X&& 2*i<=H){
      cout<<", right key = "<<a[2*i+1];
    }
    cout<<", "<<endl;
  }
  return 0;
}

