#include <iostream>
using namespace std;
int main(){
  int t;
  while(cin >> t,t){
  int ans = 0;
  int t500 = (1000 - t)/500;
  int t100 = (1000 - t)/100 - 5*t500;
  int t50 =  ((1000 - t)%100)/50;
  int t10 = (((1000 - t)%100)%50)/10;
  int t5 = ((1000 - t)%10)/5;
  int t1 = ((1000 - t)%10)%5;
  ans = t500 + t100 + t50 + t10 + t5 + t1;
  cout << ans << endl;
  }
  return 0;
}