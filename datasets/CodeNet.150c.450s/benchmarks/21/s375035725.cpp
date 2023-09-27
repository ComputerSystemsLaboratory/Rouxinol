#include<iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  if(1 > x || x > 100)
    return 0;
  cout << (x*x*x) << endl;
  return 0;
}