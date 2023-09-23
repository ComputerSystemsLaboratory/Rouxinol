#include <iostream>
using namespace std;

int main(){
  int m;
  while(cin >> m,m){
    int sum = 0;
    m = 1000 - m;
    sum += m / 500;
    m %= 500;
    sum += m / 100;
    m %= 100;
    sum += m / 50;
    m %= 50;
    sum += m / 10;
    m %= 10;
    sum += m / 5;
    m %= 5;
    cout << sum + m << endl;
  }
}