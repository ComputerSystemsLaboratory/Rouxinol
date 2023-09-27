#include <iostream>
#include <vector>
using namespace  std;

void fnBubbleSort(vector<int> &rvnSort, int &rnSortCnt)
{
  int nSorting = 0;
  bool bSorting = true;

  while (bSorting)
  {
    bSorting = false;
    for (int i = rvnSort.size() - 1; i > nSorting; i--)
    {
      if (rvnSort[i] < rvnSort[i - 1])
      {
        bSorting = true;
        swap(rvnSort[i], rvnSort[i - 1]);
        rnSortCnt++;
      }
    }
    nSorting++;
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
  int nMaxSiz;
  
  cin >> nMaxSiz;
  for (int i = 0; i < nMaxSiz; i++)
  {
    int nNum;
    cin >> nNum;
    vnSort.push_back(nNum);
  }

  fnBubbleSort(vnSort, nSortCnt);
  fnOutput(vnSort, nSortCnt);

  return 0;
}