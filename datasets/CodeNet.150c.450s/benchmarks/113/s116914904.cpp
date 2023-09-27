#include <iostream>

using namespace std;

int main()
{
  int i = 0;
  long x;
  while(1){
    cin >> x; 
    if(x == 0)break;
    cout << "Case " << ++i << ": " << x << '\n';
  }
}