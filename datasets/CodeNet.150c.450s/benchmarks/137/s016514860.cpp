#include <iostream>
#include <string>
using namespace  std;

const int cnMaxAry = 1000033;

long long fnStrToLL(string sKey)
{
  int iElm;
  int iBase = 1;
  long long llKey = 0;
  for (int i = sKey.size() - 1; i >= 0; i--)
  {
    switch (sKey[i])
    {
      case  'A': iElm = 1;
                 break;
      case  'C': iElm = 2;
                 break;
      case  'G': iElm = 3;
                 break;
      case  'T': iElm = 4;
                 break;
      default:   iElm = 0;
    }
    llKey += iBase * iElm;
    iBase *= 5;
  }
  return llKey;
}

int fnHash1(long long a_llKey) { return (a_llKey % cnMaxAry); }
int fnHash2(long long a_llKey) { return (1 + (a_llKey % (cnMaxAry - 1))); }

void fnDic(string stasDic[])
{
  int iCmdCnt;
  cin >> iCmdCnt;

  for (int i = 0; i < iCmdCnt; i++)
  {
    string sCmd;
    string sKey;
    cin >> sCmd >> sKey;

    long long llKey = fnStrToLL(sKey);
    int iCnt = 0;
    for (iCnt = 0; ;iCnt++)
    {
      int ix = (fnHash1(llKey) + iCnt * fnHash2(llKey)) % cnMaxAry;
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

  static string stasDic[cnMaxAry];
  fnDic(stasDic);
  
  return 0;
}