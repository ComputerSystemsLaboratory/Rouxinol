#include <iostream>
#include <string>
#include <list>
using namespace  std;

void fnLinkedListSet(list<int> &a_rltiNumber)
{
  list<int>::iterator itlti;
  list<int>::iterator itltEND = a_rltiNumber.end();
  string sCommand;
  int iMaxCommand, iNumber;

  cin.tie(0);
  ios::sync_with_stdio(false);
 
  cin >> iMaxCommand;
  for (int i = 0; i < iMaxCommand; i++)
  {
    cin >> sCommand;
    if (sCommand == "insert")
    {
      cin >> iNumber;
      a_rltiNumber.push_front(iNumber);
    }
    else if (sCommand == "deleteFirst")
      a_rltiNumber.pop_front();
    else if (sCommand == "deleteLast")
      a_rltiNumber.pop_back();
    else if (sCommand == "delete")
    {
      cin >> iNumber;
      for (itlti = a_rltiNumber.begin(); itlti != itltEND; ++itlti)
        if (*itlti == iNumber)
        {
          a_rltiNumber.erase(itlti);
          break;
        }
    }
  }
}

void fnLinkedListGet(const list<int> &a_cnrltiNumber)
{
  list<int>::const_iterator itlti;
  list<int>::const_iterator itltEND = a_cnrltiNumber.end();
  int i = 0;
  for (itlti = a_cnrltiNumber.begin(); itlti != itltEND; ++itlti)
  {
    if (i++) cout << " ";
    cout << *itlti;
  }
  cout << endl;
}

int main()
{
  list<int> ltiNumber;
  fnLinkedListSet(ltiNumber);
  fnLinkedListGet(ltiNumber);

  return 0;
}