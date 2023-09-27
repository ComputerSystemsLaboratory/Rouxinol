#include <iostream>
using namespace std;
int main()
{
  int a,b,tmp;
  cin >> a >> b;
  if(a>b) swap(a,b);
  while(a % b != 0)
  {
      tmp = b;
      b = a % b;
      a = tmp;
  }
  cout << b << endl;
}