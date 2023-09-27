#include <iostream>

using namespace std;

int main()
{
  int a, b;
  
  while (cin >> a >> b){
    int cnt = 1;
    for (int i = a + b; i >= 10; cnt++) i /= 10;
    
    cout << cnt << endl;
  }

  return (0);
}