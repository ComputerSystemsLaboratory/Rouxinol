#include <iostream>
#include <string>
using namespace  std;

const int cnnMaxAry = 1000033;

long long fnStrToLL(string sKey)
{
  int nElm;
  int nBase = 1;
  long long nKey = 0;
  for (int i = sKey.size() - 1; i >= 0; i--)
  {
    switch (sKey[i])
    {
      case  'A': nElm = 1;
                 break;
      case  'C': nElm = 2;
                 break;
      case  'G': nElm = 3;
                 break;
      case  'T': nElm = 4;
                 break;
      default:   nElm = 0;
    }
    nKey += nBase * nElm;
    nBase *= 5;
  }
  return nKey;
}

int fnHash1(long long nKey) { return (nKey % cnnMaxAry); }
int fnHash2(long long nKey) { return (1 + (nKey % (cnnMaxAry - 1))); }

void fnDic(string stasDic[])
{
  int nCmdCnt;
  cin >> nCmdCnt;

  for (int i = 0; i < nCmdCnt; i++)
  {
    string sCmd;
    string sKey;
    cin >> sCmd >> sKey;

    long long nKey = fnStrToLL(sKey);
    int nCnt = 0;
    for (nCnt = 0; ;nCnt++)
    {
      int ix = (fnHash1(nKey) + nCnt * fnHash2(nKey)) % cnnMaxAry;
      if (stasDic[ix] == sKey)
      {
        if (sCmd[0] == 'i')
          break;
        else if (sCmd[0] == 'f')
        {
          cout << "yes" << endl;
          break;
        }
      }
      else if (stasDic[ix].size() == 0)
      {
        if (sCmd[0] == 'i')
        {
          stasDic[ix] = sKey;
          break;
        }
        else if (sCmd[0] == 'f')
        {
          cout << "no" << endl;
          break;
        }
      }
    }
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  static string stasDic[cnnMaxAry];
  fnDic(stasDic);
  
  return 0;
}