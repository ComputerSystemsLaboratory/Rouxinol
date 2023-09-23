#include <iostream>
using namespace std;

int main(void){
  int n, m, p, x, acc, winner, i;
  while(1){
    cin >> n >> m >> p;
    if(n == 0){
      break;
    }
    acc = 0;
    winner = 0;
    for(i=0;i<n;i++){
      cin >> x;
      acc += 100 * x;
      if(i == m - 1){
        winner = x;
      }
    }
    acc = acc * (100 - p) / 100;
    if(winner == 0){
      cout << 0 << endl;
    }else{
      cout << acc / winner << endl;
    }
  }
  return 0;
}
