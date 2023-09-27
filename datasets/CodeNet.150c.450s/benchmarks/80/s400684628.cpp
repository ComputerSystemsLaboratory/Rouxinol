#include <iostream>
using namespace std;

int main(){
  int sum1=0,sum2=0;  

  for(int a,i=0;i<4;++i){
    cin>>a;sum1+=a;
  }
  for(int a,i=0;i<4;++i){
    cin>>a; sum2+=a;
  }

  if(sum1>sum2) cout<<sum1<<endl;
  else cout<<sum2<<endl;
  return 0;
}