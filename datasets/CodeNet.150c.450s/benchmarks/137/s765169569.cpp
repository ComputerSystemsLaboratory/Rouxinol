#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace  std;

void fnDictionaryIns(set<string> &a_sesKey, vector<string> &a_vsFind)
{
  int iCommandCnt;
  cin >> iCommandCnt;

  for (int i = 0; i < iCommandCnt; i++)
  {
    string sCommand;
    string sKey;
    cin >> sCommand >> sKey;

    if (sCommand[0] == 'i')
      a_sesKey.insert(sKey);
    else if (sCommand[0] == 'f')
    {
      auto itsesKey = a_sesKey.find(sKey);
      if (itsesKey != end(a_sesKey))
        a_vsFind.push_back("yes");
      else
        a_vsFind.push_back("no");
    }
  }
}

void fnDictionaryFnd(const vector<string> &a_cnvsFind)
{
  for (int i = 0; i < a_cnvsFind.size(); i++)
    cout << a_cnvsFind[i] << endl;
}

void fnResultOut(int a_iFound)
{
  cout << a_iFound << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  set<string> sesKey;
  vector<string> vsFind;
  fnDictionaryIns(sesKey, vsFind);
  fnDictionaryFnd(vsFind);
  
  return 0;
}