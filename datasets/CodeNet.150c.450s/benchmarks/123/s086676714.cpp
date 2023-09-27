#include <iostream>
#include <vector>
#include <cmath>
using namespace  std;

void fnPrimeNumber(const vector<int> &argviNum, int &argiPrimeCnt)
{
  for (int i = 0; i < argviNum.size(); i++)
  {
    bool bPrimeNo = true;
    if (argviNum[i] > 2  &&  argviNum[i] % 2 == 0)
      bPrimeNo = false;
    else
    {
      double dSqrt = sqrt((double)argviNum[i]);
      int iMaxDivisor = (int)dSqrt;

      for (int iDivisor = 2; iDivisor <= iMaxDivisor; iDivisor++)
      {
        if (argviNum[i] % iDivisor == 0)
        {
          bPrimeNo = false;
          break;
        }
      }
      if (bPrimeNo) argiPrimeCnt++;
    }
  }
}

int main()
{
  vector<int> viNum;
  int iMaxSize;
  int iPrimeCnt = 0;
  
  cin >> iMaxSize;
  for (int i = 0; i < iMaxSize; i++)
  {
    int iNum;
    cin >> iNum;
    viNum.push_back(iNum);
  }

  fnPrimeNumber(viNum, iPrimeCnt);
  cout << iPrimeCnt << endl;

  return 0;
}