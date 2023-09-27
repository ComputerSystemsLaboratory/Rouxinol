#include <iostream>
using namespace std;

int main(){
  int n;
  while(1){
    cin>>n;
    if(n==0) break;
    int i,cr,max;
    cr=0;
    max=-100000;
    while(n--){
      cin>>i;
      cr +=i;
      if(cr>max) max=cr;
      if(cr<0) cr=0;
    }
    cout<<max<<endl;
  }
  return 0;
}