#include <iostream>
using namespace std;

int main(){
  int max=0,min=1000000001,r1,r2,r,dif,n;
  cin>>n>>r1>>r2;
  if(r1>r2){
    max=r1;
    min=r2;
    dif=min-max;
    max=0;
  }
  else{
    max=r2;
    min=r1;
    dif=max-min;
  }

  for(int i=0;i<n-2;i++){
    cin>>r;
    if(r<min){
      min=r;
      max=0;
      goto begin;
    }
    else if(r>max)max=r;
    begin:
    if(dif<max-min)dif=max-min;
  }
  cout<<dif<<endl;
return 0;
}