#include <iostream>
using namespace std;
int main(){
  int d,now;
  int cnt;
  while(cin >> d){
    now = d;
    cnt = 0;
    while(now < 600){
      cnt += now * now * d;
      now += d;
    }
    cout << cnt << endl;
  }
  return(0);
}