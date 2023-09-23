#include <iostream>
using namespace std;
int main(void){
  int i,x;
  for(i=1;i<=10000;i++){
    cin>>x;
    if(!x)break;
    cout<<"Case "<<i<<": "<<x<<endl;
  }
  return 0;
}