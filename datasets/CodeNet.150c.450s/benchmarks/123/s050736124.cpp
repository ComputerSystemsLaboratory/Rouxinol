#include <iostream>
#include <vector>
#include <cmath>
using namespace  std;

void fnPrimeNumber(const vector<int>& cnrvnNum, int& rnPrmCnt)
{
  for (int i = 0; i < cnrvnNum.size(); i++)
  {
    bool bPrmNo = true;
    if (cnrvnNum[i] > 2  &&  cnrvnNum[i] % 2 == 0)
      bPrmNo = false;
    else
    {
      double dSqrt = sqrt((double)cnrvnNum[i]);
      int iMaxDiv = (int)dSqrt;

      for (int nDiv = 2; nDiv <= iMaxDiv; nDiv++)
      {
        if (cnrvnNum[i] % nDiv == 0)
        {
          bPrmNo = false;
          break;
        }
      }
      if (bPrmNo) rnPrmCnt++;
    }
  }
}

int main()
{
  vector<int> vnNum;
  int nMaxSiz;
  int nPrmCnt = 0;
  
  cin >> nMaxSiz;
  for (int i = 0; i < nMaxSiz; i++)
  {
    int nNum;
    cin >> nNum;
    vnNum.push_back(nNum);
  }

  fnPrimeNumber(vnNum, nPrmCnt);
  cout << nPrmCnt << endl;

  return 0;
}