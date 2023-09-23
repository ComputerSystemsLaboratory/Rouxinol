#include <iostream>
using namespace std;

int main(){
  int a, b, sum, digit;
  while(cin >> a >> b){
    sum = a + b;
    digit = 0;
    while(sum > 0){
      digit++;
      sum /= 10;
    }
    cout << digit << endl;
  }
}