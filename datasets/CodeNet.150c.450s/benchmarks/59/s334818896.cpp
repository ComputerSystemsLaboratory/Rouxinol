#include <iostream>
#include <vector>
using namespace  std;

vector<int> viSort;
int iMaxSize;

void fnTrace()
{
  for (int i = 0; i < iMaxSize; i++)
  {
    if (i) cout << " ";
    cout << viSort[i];
  }
  cout << endl;
}

void insertionSort()
{
  for (int i = 1; i < iMaxSize; i++)
  {
    int iTarget = viSort[i];
    int j = i - 1;
    while (iTarget < viSort[j] &&
           j       >= 0            )
    {
      viSort[j + 1] = viSort[j];
      j--;
    }
    viSort[j + 1] = iTarget;
    fnTrace();
  }
}

int main()
{
  cin >> iMaxSize;
  viSort.resize( iMaxSize );
  for (int i = 0; i < iMaxSize; i++) cin >> viSort[i];

  fnTrace();
  insertionSort();

  return 0;
}