#include <iostream>
#include <list>
using namespace  std;

void fnLinkedListSet(list<int> &a_rltiNumber)
{
  list<int>::iterator itlti;
  list<int>::iterator itltEND = a_rltiNumber.end();
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
      a_rltiNumber.push_front(iNumber);
    }
    else if (acCommand[6] == 'F')
      a_rltiNumber.pop_front();
    else if (acCommand[6] == 'L')
      a_rltiNumber.pop_back();
    else if (acCommand[0] == 'd')
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

  for (itlti = a_cnrltiNumber.begin(); itlti != itltEND; ++itlti)
  {
    if (itlti != a_cnrltiNumber.begin()) cout << " ";
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