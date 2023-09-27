#include <iostream>
#include <vector>
using namespace  std;

void fnTrace(vector<int> &argviSort, int argiSize)
{
  for (int i = 0; i < argiSize; i++)
  {
    if (i) cout << " ";
    cout << argviSort[i];
  }
  cout << endl;
}

void fnInsertionSort(vector<int> &argviSort, int argiSize)
{
  for (int i = 1; i < argiSize; i++)
  {
    int iTarget = argviSort[i];
    int j = i - 1;
    while (iTarget < argviSort[j] &&
           j       >= 0            )
    {
      argviSort[j + 1] = argviSort[j];
      j--;
    }
    argviSort[j + 1] = iTarget;
    fnTrace(argviSort, argiSize);
  }
}

int main()
{
  vector<int> viSort;
  int iMaxSize;
  
  cin >> iMaxSize;
  viSort.resize( iMaxSize );
  for (int i = 0; i < iMaxSize; i++) cin >> viSort[i];

  fnTrace(viSort, iMaxSize);
  fnInsertionSort(viSort, iMaxSize);

  return 0;
}