#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int num,ans=0;
  int temp;
  cin>>num;
  for(int i=0;i<num;i++){
    cin>>temp;
    for(int j=2;j<=sqrt(temp);j++){
      if(temp%j==0)goto nex;
    }
    ans++;
  nex:;
  }

  cout<<ans<<endl;
  return 0;
}