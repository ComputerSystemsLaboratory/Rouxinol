//*******************************************************************************
//       DoublyLinkedList                 
//*******************************************************************************
//     < ???????????? >
//       DoublyLinkedList ??????????????????
//       ??\?????????????????? char ??????????????¨?????????
//*******************************************************************************
#include <iostream>
#include <list>
using namespace  std;

void fnLinkedListSet(list<int>& rltnNum)
{
  list<int>::iterator itltn;
  list<int>::iterator itltEND = rltnNum.end();
  char acCmd[80];
  int nMaxCmd, nNum;

  cin.tie(0);
  ios::sync_with_stdio(false);
 
  cin >> nMaxCmd;
  for (int i = 0; i < nMaxCmd; i++)
  {
    cin >> acCmd;
    if (acCmd[0] == 'i')
    {
      cin >> nNum;
      rltnNum.push_front(nNum);
    }
    else if (acCmd[6] == 'F')
      rltnNum.pop_front();
    else if (acCmd[6] == 'L')
      rltnNum.pop_back();
    else if (acCmd[0] == 'd')
    {
      cin >> nNum;
      for (itltn = rltnNum.begin(); itltn != itltEND; ++itltn)
        if (*itltn == nNum)
        {
          rltnNum.erase(itltn);
          break;
        }
    }
  }
}

void fnLinkedListGet(const list<int>& cnrltnNum)
{
  list<int>::const_iterator itltn;
  list<int>::const_iterator itltEND = cnrltnNum.end();

  for (itltn = cnrltnNum.begin(); itltn != itltEND; ++itltn)
  {
    if (itltn != cnrltnNum.begin()) cout << " ";
    cout << *itltn;
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  list<int> ltnNum;
  fnLinkedListSet(ltnNum);
  fnLinkedListGet(ltnNum);

  return 0;
}