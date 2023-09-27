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

void fnTrace(const vector<int> &cnrvnSort)
{
  for (int i = 0; i < cnrvnSort.size(); i++)
  {
    if (i) cout << " ";
    cout << cnrvnSort[i];
  }
  cout << endl;
}

void fnInsertionSort(vector<int> &rvnSort)
{
  for (int nSorting = 1; nSorting < rvnSort.size(); nSorting++)
  {
    int nTrg = rvnSort[nSorting];
    int nSorted = nSorting - 1;

    while (nSorted >= 0          &&
           nTrg  < rvnSort[nSorted])
    {
      rvnSort[nSorted + 1] = rvnSort[nSorted];
      nSorted--;
    }
    rvnSort[nSorted + 1] = nTrg;
    fnTrace(rvnSort);
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<int> vnSort;

  fnInput(vnSort);
  fnTrace(vnSort);
  fnInsertionSort(vnSort);

  return 0;
}