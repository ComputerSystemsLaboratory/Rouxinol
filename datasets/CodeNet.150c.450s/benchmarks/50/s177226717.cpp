#include <iostream>
using namespace std;

int main(){
  int mon;
  while(cin >> mon,mon){
    int sum = 0;
    mon = 1000 - mon;
    sum += mon / 500;
    mon %= 500;
    
    sum += mon / 100;
    mon %= 100;
    
    sum += mon / 50;
    mon %= 50;
    
    sum += mon / 10;
    mon %= 10;
    
    sum += mon / 5;
    mon %= 5;
    
    cout << sum + mon << endl;
  }
}