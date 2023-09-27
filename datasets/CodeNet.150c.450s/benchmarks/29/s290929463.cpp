#include <iostream>
#include <list>
using namespace  std;

int main()
{
  list<int> ltiNumber;
  list<int>::iterator itlti;
  list<int>::iterator itltEND = ltiNumber.end();
  char acCommand[80];
  int iMaxCommand, iNumber;

  cin.tie(0);
  ios::sync_with_stdio(false);
 
  cin >> iMaxCommand;
  for (int i = 0; i < iMaxCommand; i++)
  {
    cin >> acCommand;
    if (acCommand[0] == 'i')
    {
      cin >> iNumber;
      ltiNumber.push_front(iNumber);
    }
    else if (acCommand[6] == 'F')
      ltiNumber.pop_front();
    else if (acCommand[6] == 'L')
      ltiNumber.pop_back();
    else if (acCommand[0] == 'd')
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