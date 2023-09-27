#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace  std;

void fnDictionary(set<string> &a_rsesKey, vector<string> &a_rvsFind)
{
  int iCommandCnt;
  cin >> iCommandCnt;

  for (int i = 0; i < iCommandCnt; i++)
  {
    string sCommand;
    string sKey;
    cin >> sCommand >> sKey;

    if (sCommand[0] == 'i')
      a_rsesKey.insert(sKey);
    else if (sCommand[0] == 'f')
    {
      auto itsesKey = a_rsesKey.find(sKey);
      if (itsesKey != end(a_rsesKey))
        a_rvsFind.push_back("yes");
      else
        a_rvsFind.push_back("no");
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

  set<string> sesKey;
  vector<string> vsFind;

  fnDictionary(sesKey, vsFind);
  fnResult(vsFind);
  
  return 0;
}