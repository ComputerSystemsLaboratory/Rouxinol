#include <iostream>
using namespace std;

int gce(int a, int b){
  int x, y, reminder;
  x = a >= b ? a : b;
  y = a >= b ? b : a;
  reminder = x % y;
  if(reminder == 0){
    return y;
  }
  else return gce(y, reminder);
}

int main(){
  int a, b, res;
  cin >> a >> b;

  res = gce(a, b);
  cout << res << endl;
}