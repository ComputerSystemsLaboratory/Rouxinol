#include <iostream>
#include <vector>
using namespace  std;

void fnBubbleSort(vector<int> &a_rviSort, int &a_riSortCnt)
{
  int ixSorting = 0;
  bool bSorting = true;

  while (bSorting)
  {
    bSorting = false;
    for (int i = a_rviSort.size() - 1; i > ixSorting; i--)
    {
      if (a_rviSort[i] < a_rviSort[i - 1])
      {
        bSorting = true;
        swap(a_rviSort[i], a_rviSort[i - 1]);
        a_riSortCnt++;
      }
    }
    ixSorting++;
  }
}

void fnOutput(const vector<int> &a_cnrviSort, int a_iSortCnt)
{
  for (int i = 0; i < a_cnrviSort.size(); i++)
  {
    if (i) cout << " ";
    cout << a_cnrviSort[i];
  }
  cout << endl;
  cout << a_iSortCnt << endl;
}
    
int main()
{
  int iSortCnt = 0;
  vector<int> viSort;
  int iMaxSize;
  
  cin >> iMaxSize;
  for (int i = 0; i < iMaxSize; i++)
  {
    int iNum;
    cin >> iNum;
    viSort.push_back(iNum);
  }

  fnBubbleSort(viSort, iSortCnt);
  fnOutput(viSort, iSortCnt);

  return 0;
}