#include <iostream>
#include <vector>
#include <climits>
using namespace  std;

void fnInput(int &rnMaxSiz, vector<int> &rvnSort)
{
  cin >> rnMaxSiz;

  rvnSort.resize(rnMaxSiz);
  for (int i = 0; i < rnMaxSiz; i++)
    cin >> rvnSort[i];
}

void fnMerge(vector<int> &rvnSort, int &rnSortCnt, int nLeft, int nMid, int nRight)
{
  vector<int> vLeft, vRight;
  int nLeftSiz = nMid - nLeft;
  int nRightSiz = nRight - nMid;

  vLeft.resize(nLeftSiz + 1);
  vRight.resize(nRightSiz + 1);

  for (int i = 0; i < nLeftSiz; i++)
    vLeft[i] = rvnSort[nLeft + i];
  for (int i = 0; i < nRightSiz; i++)
    vRight[i] = rvnSort[nMid + i];

  vLeft[nLeftSiz]   = INT_MAX;
  vRight[nRightSiz] = INT_MAX;
  int i = 0, j = 0;

  for (int n = nLeft; n < nRight; n++)
    if (vLeft[i] <= vRight[j])
    {
      rvnSort[n] = vLeft[i++];
      rnSortCnt++;
    }
    else
    {
      rvnSort[n] = vRight[j++];
      rnSortCnt++;
    }
}

void fnMergeSort(vector<int> &rvnSort, int &rnSortCnt, int nLeft, int nRight)
{
  if (nLeft + 1 < nRight)
  {
    int nMid = (nLeft + nRight) / 2;
    fnMergeSort(rvnSort, rnSortCnt, nLeft, nMid);
    fnMergeSort(rvnSort, rnSortCnt, nMid, nRight);
    fnMerge(rvnSort, rnSortCnt, nLeft, nMid, nRight);
  }
}

void fnResult(const vector<int> &cnrvnSort, int nSortCnt)
{
  for (int i = 0; i < cnrvnSort.size(); i++)
  {
    if (i != 0)  cout << " ";
    cout << cnrvnSort[i];
  }
  cout << endl;
  cout << nSortCnt << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int nMaxSiz;
  vector<int> vnSort;

  fnInput(nMaxSiz, vnSort);

  int nLeft = 0;
  int nRight = nMaxSiz;
  int nSortCnt = 0;
  fnMergeSort(vnSort, nSortCnt, nLeft, nRight);

  fnResult(vnSort, nSortCnt);

  return 0;
}