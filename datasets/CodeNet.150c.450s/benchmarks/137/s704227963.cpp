#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace  std;

void fnDictionary(set<string>& rsesKey, vector<string>& rvsFnd)
{
  int nCmdCnt;
  cin >> nCmdCnt;

  for (int i = 0; i < nCmdCnt; i++)
  {
    string sCmd;
    string sKey;
    cin >> sCmd >> sKey;

    if (sCmd[0] == 'i')
      rsesKey.insert(sKey);
    else if (sCmd[0] == 'f')
    {
      auto itsesKey = rsesKey.find(sKey);
      if (itsesKey != end(rsesKey))
        rvsFnd.push_back("yes");
      else
        rvsFnd.push_back("no");
    }
  }
}

void fnResult(const vector<string>& cnrvsFnd)
{
  for (int i = 0; i < cnrvsFnd.size(); i++)
    cout << cnrvsFnd[i] << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  set<string> sesKey;
  vector<string> vsFnd;

  fnDictionary(sesKey, vsFnd);
  fnResult(vsFnd);
  
  return 0;
}