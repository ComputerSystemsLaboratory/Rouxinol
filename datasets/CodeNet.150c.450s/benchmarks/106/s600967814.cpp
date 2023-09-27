#include <iostream>
using namespace std;
int main()
{
  int a,b,c,d,i;
  cin >> a >> b >> c;
  d = 0;
  for (i = b; i >= a; i--) {
    if(c%i == 0){
      d = d+1;
    }
    /* code */
  }

  cout << d << '\n';

  return 0;
}