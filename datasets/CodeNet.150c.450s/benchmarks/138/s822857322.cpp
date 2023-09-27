#include <iostream>
using namespace std;
int main(){
  int x,y,r;
  cin >> x >> y;
  if (x<y){
    int z = x;
    x = y;
    y = z;
  }
  while (y > 0){
    r = x%y;
    x = y;
    y = r;
  }
  cout << x << endl;
}