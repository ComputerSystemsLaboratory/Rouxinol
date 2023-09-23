#include <iostream>
using namespace  std;

int main()
{
  int iDividend, iDivisor, iRest;
  int iGCD;
  
  cin >> iDividend >> iDivisor;
  while (iDividend % iDivisor != 0)
  {
    iRest = iDividend % iDivisor;
    iDividend = iDivisor;
    iDivisor  = iRest;
  }

  iGCD = iDivisor;
  cout << iGCD << endl;
  return 0;
}