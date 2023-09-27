#include<iostream>
using namespace std;
int main(){
  int d,dk,ans;
  while(cin>>d){
    dk = d;
    ans = 0;
    for(int i=1;i<600/d;i++){
      ans += dk*dk*d;
      dk += d;
    }
    cout << ans << endl;
  }
  return 0;
}