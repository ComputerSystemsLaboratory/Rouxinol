#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >>a >>b >>c;

  int a1 = a, b1 = b;
  if(a>b)
  {
    a1=b;
    b1=a;
  }
  int b2 = b1, c2 = c;
  if(b1>c)
  {
    b2=c;
    c2=b1;
  }
  int a3 = a1, b3 = b2;
  if(a1>b2)
  {
    a3=b2;
    b3=a1;
  }

  cout <<a3 <<" "<<b3 <<" "<<c2 <<endl;
  return 0;
}