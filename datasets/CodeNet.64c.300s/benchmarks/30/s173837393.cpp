#include <iostream>
using namespace std;
int coin[6] = {500,100,50,10,5,1};

int main() {
  int price,change,res=0;
  while(cin >> price) {
    if(price == 0) break;
    change = 1000 - price;
    for(int i=0;i<6;i++) {
      res += change/coin[i];
      change -= (change/coin[i]) * coin[i];
    }
    cout << res << endl;
    res = 0;
  }
}