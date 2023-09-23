#include <iostream>
using namespace std;

int main(void){
  int i, k = 100000;

  cin >> i;

  for(int j = 1;j<=i;j++){
    k = k + k * 0.05;
    if(k % 1000 != 0) k += 1000 - (k % 1000);
  }

  cout << k << endl;

  return 0;
}