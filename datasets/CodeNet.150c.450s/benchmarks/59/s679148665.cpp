#include <iostream>
#include <vector>
using namespace  std;

void fnTrace(const vector<int> &a_cnrviSort)
{
  for (int i = 0; i < a_cnrviSort.size(); i++)
  {
    if (i) cout << " ";
    cout << a_cnrviSort[i];
  }
  cout << endl;
}

void fnInsertionSort(vector<int> &a_rviSort)
{
  for (int ixSorting = 1; ixSorting < a_rviSort.size(); ixSorting++)
  {
    int iTarget = a_rviSort[ixSorting];
    int ixSorted = ixSorting - 1;

    while (ixSorted >= 0               &&
           iTarget  < a_rviSort[ixSorted])
    {
      a_rviSort[ixSorted + 1] = a_rviSort[ixSorted];
      ixSorted--;
    }
    a_rviSort[ixSorted + 1] = iTarget;
    fnTrace(a_rviSort);
  }
}

int main()
{
  vector<int> viSort;
  int iMaxSize;
  
  cin >> iMaxSize;
  for (int i = 0; i < iMaxSize; i++)
  {
    int iNum;
    cin >> iNum;
    viSort.push_back(iNum);
  }

  fnTrace(viSort);
  fnInsertionSort(viSort);

  return 0;
}