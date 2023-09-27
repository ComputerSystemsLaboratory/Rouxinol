#include <iostream>
#include <vector>
#include <string>
using namespace  std;

const int cnMaxArray = 1000033;

long long fnStrToInt(string sKey)
{
  int iElement;
  int iBase = 1;
  int llKey  = 0;
  for (int i = sKey.size() - 1; i >= 0; i--)
  {
    switch (sKey[i])
    {
      case  'A': iElement = 1;
                 break;
      case  'C': iElement = 2;
                 break;
      case  'G': iElement = 3;
                 break;
      case  'T': iElement = 4;
                 break;
      default:   iElement = 0;
    }
    llKey += iBase * iElement;
    iBase *= 5;
  }
  return llKey;
}

int fnHash1(long long a_llKey) { return (a_llKey % cnMaxArray); }
int fnHash2(long long a_llKey) { return (1 + (a_llKey % (cnMaxArray - 1))); }

void fnDictionary(string a_rsDictionary[], vector<string> &a_rvsFind)
{
  int iCommandCnt;
  cin >> iCommandCnt;

  for (int i = 0; i < iCommandCnt; i++)
  {
    string sCommand;
    string sKey;
    cin >> sCommand >> sKey;

    long long llKey = fnStrToInt(sKey);
    int iCnt = 0;
    for (iCnt = 0; ;iCnt++)
    {
      int ix = (fnHash1(llKey) + iCnt * fnHash2(llKey)) % cnMaxArray;
      if (a_rsDictionary[ix] == sKey)
      {
        if (sCommand[0] == 'f')
        {
          a_rvsFind.push_back("yes");
          break;
        }
      }
      else if (a_rsDictionary[ix].size() == 0)
      {
        if (sCommand[0] == 'i')
        {
          a_rsDictionary[ix] = sKey;
          break;
        }
        else if (sCommand[0] == 'f')
        {
          a_rvsFind.push_back("no");
          break;
        }
      }
    }
  }
}

void fnResult(const vector<string> &a_cnrvsFind)
{
  for (int i = 0; i < a_cnrvsFind.size(); i++)
    cout << a_cnrvsFind[i] << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  static string sDictionary[cnMaxArray];
  vector<string> vsFind;

  fnDictionary(sDictionary, vsFind);
  fnResult(vsFind);
  
  return 0;
}