#include<iostream>

using namespace std;

void Calculate(int, int&, int&);

int main(){
  int n, m, count;

  while(1){
    cin >> n;
    if(n == 0) break;

    n = 1000 - n;
    count = 0;

    Calculate(500, n, count);
    Calculate(100, n, count);
    Calculate(50, n, count);
    Calculate(10, n, count);
    Calculate(5, n, count);
    Calculate(1, n, count);

    cout << count << endl;
  }

  return 0;
}

void Calculate(int m, int& n, int& count){
  int x;

  while(1){
    x = n - m;
    if(x < 0) break;
    ++count;
    n = x;
  }
}