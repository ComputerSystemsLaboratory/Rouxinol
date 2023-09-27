#include <iostream>

using namespace std;

int main(void)
{
  int i, x = 100000;
  int a;
  cin >> i;
  
  for(a = 0; a < i; a++){
    x += (x * 0.05);
    if(x % 1000 != 0){
      x = (x / 1000 + 1) * 1000;
    }
  }
  cout << x << endl;
  return 0;
}