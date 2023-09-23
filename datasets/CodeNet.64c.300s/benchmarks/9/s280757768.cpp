#include <iostream>
using namespace std;
int main(){
  int n,i;
  int temp;
  double ans = 100;
  cin >> n;
  for(i = 0;i < n;i++){
    ans *= 1.05;
    temp = (int)ans;
    if((double)temp != ans){
      ans = (double)temp + 1;
    }
  }
  cout << ans << "000" << endl;
  return(0);
}