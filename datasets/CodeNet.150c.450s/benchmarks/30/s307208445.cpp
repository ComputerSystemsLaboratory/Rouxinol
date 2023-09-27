#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &rvnSort)
{
  int nMaxSiz;
  cin >> nMaxSiz;
  
  rvnSort.resize(nMaxSiz);
  for (int i = 0; i < nMaxSiz; i++)
    cin >> rvnSort[i];
}

void fnSelectionSort(vector<int> &rvnSort, int &rnSortCnt)
{
  for (int nSorting = 0; nSorting < rvnSort.size() - 1; nSorting++)
  {
    int nMin = nSorting;
    bool bSorting = false;

    for (int j = nSorting + 1; j < rvnSort.size(); j++)
    {
      if (rvnSort[j] < rvnSort[nMin])
      {
        nMin = j;
        bSorting = true;
      }
    }
    if (bSorting)
    {
      swap(rvnSort[nSorting], rvnSort[nMin]);
      rnSortCnt++;
    }
  }
}

void fnOutput(const vector<int> &cnrvnSort, int nSortCnt)
{
  for (int i = 0; i < cnrvnSort.size(); i++)
  {
    if (i) cout << " ";
    cout << cnrvnSort[i];
  }
  cout << endl;
  cout << nSortCnt << endl;
}

int main()
{ 
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int nSortCnt = 0;
  vector<int> vnSort;

  fnInput(vnSort);
  fnSelectionSort(vnSort, nSortCnt);
  fnOutput(vnSort, nSortCnt);

  return 0;
}