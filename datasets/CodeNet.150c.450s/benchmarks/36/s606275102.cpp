#include<iostream>
using namespace std;

int main(){
  int d;
  while(cin >> d){
    int ans = 0;
    int cou=1;
    while(d*cou <= 600-d){
      ans += (d*cou)*(d*cou)*d;
      cou++;
    }
    cout << ans << endl;
  }
}