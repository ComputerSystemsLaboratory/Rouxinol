#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int i,ki[1000001],all[1000001],n[200],a;
  for(i=0;;i++){
    n[i]=i*(i+1)*(i+2)/6;
    if(n[i]>1000000)break;
  }
  for(int j=0;j<=1000000;j++){
    ki[j]=j;
    all[j]=j;
  }
  for(int j=2 ; j<i ; j++){
    for(int k=n[j];k<=1000000;k++){
      all[k]=min(all[k],all[k-n[j]]+1);
      if(n[j]%2==1){
      ki [k]=min(ki [k],ki[k-n[j]]+1);
      }
    }
  }
  while(1){
    cin>>a;
    if(a==0)break;
    cout<<all[a]<<" "<<ki[a]<<endl;
  }

  return 0;
}