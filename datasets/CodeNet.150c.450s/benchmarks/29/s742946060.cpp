#include <iostream>
#include <string>
#include <list>
using namespace  std;

int main()
{
  list<int> ltiNumber;
  list<int>::iterator itlti;
  list<int>::iterator itltEND = ltiNumber.end();
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
      ltiNumber.push_front(iNumber);
    }
    else if (sCommand == "deleteFirst")
      ltiNumber.pop_front();
    else if (sCommand == "deleteLast")
      ltiNumber.pop_back();
    else if (sCommand == "delete")
    {
      cin >> iNumber;
      for (itlti = ltiNumber.begin(); itlti != itltEND; ++itlti)
        if (*itlti == iNumber)
        {
          ltiNumber.erase(itlti);
          break;
        }
    }
  }

  int i = 0;
  for (itlti = ltiNumber.begin(); itlti != itltEND; ++itlti)
  {
    if (i++) cout << " ";
    cout << *itlti;
  }
  cout << endl;

  return 0;
}