#include <iostream>
#include <vector>
using namespace  std;

void fnInsertionSort(vector<int>&);
void fnTrace(vector<int>);

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

void fnInsertionSort(vector<int> &argviSort)
{
  for (int i = 1; i < argviSort.size(); i++)
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
    fnTrace(argviSort);
  }
}

void fnTrace(vector<int> argviSort)
{
  for (int i = 0; i < argviSort.size(); i++)
  {
    if (i) cout << " ";
    cout << argviSort[i];
  }
  cout << endl;
}