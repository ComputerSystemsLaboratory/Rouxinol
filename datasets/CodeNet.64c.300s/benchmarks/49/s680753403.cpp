#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void do_calc(int a, int b){
  int c = a + b;
  int n = 0;
  while(true){
    if(c < 1.0f){
      cout << n << endl;
      break;
    }
    c = c/10;
    n++;
  }
}
  


int main(){
  int a, b;
  while(cin >> a >> b){
    do_calc(a, b);
  }
}