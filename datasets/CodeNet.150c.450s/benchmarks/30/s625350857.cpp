#include <iostream>
#include <vector>
using namespace  std;

void fnSelectionSort(vector<int> &a_rviSort, int &a_riSortCnt)
{
  for (int ixSorting = 0; ixSorting < a_rviSort.size() - 1; ixSorting++)
  {
    int ixMinimum = ixSorting;
    bool bSorting = false;

    for (int j = ixSorting + 1; j < a_rviSort.size(); j++)
    {
      if (a_rviSort[j] < a_rviSort[ixMinimum])
      {
        ixMinimum = j;
        bSorting = true;
      }
    }
    if (bSorting)
    {
      swap(a_rviSort[ixSorting], a_rviSort[ixMinimum]);
      a_riSortCnt++;
    }
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

  fnSelectionSort(viSort, iSortCnt);
  fnOutput(viSort, iSortCnt);

  return 0;
}