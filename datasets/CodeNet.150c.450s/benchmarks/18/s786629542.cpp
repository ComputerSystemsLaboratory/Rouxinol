#include<bits/stdc++.h>
using namespace std;

int main(){
  int money = 100000, n;
  cin >> n;
  for(int i = 0;i < n;i++){
    money *= 1.05;
    if(money % 1000 > 0) {
      money -= money % 1000;
      money += 1000;
    }
  }

  cout << money << "\n";
  return 0;
}

