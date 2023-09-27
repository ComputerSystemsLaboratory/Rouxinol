#include <iostream>

using namespace std;

int N;
int *A;

int Partition()
{
  int r = N - 1;
  int x = A[r];
  int i = 0;

  for(int j = 0; j < r; ++j)
  {
    if(A[j] <= x)
    {
      int tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;

      ++i;
    }
  }

  int tmp = A[r];
  A[r] = A[i];
  A[i] = tmp;

  return i;
}

int main()
{
  cin >> N;

  A = new int[N];

  for(int i = 0; i < N; ++i)
    cin >> A[i];

  int rIndex = Partition();

  for(int i = 0; i < N; ++i)
  {
    cout << (i == 0 ? "" : " ");
    if(i == rIndex)
      cout << "[" << A[i] << "]";
    else 
      cout << A[i];
  }
  cout << endl;

  delete [] A;

  return 0;
}
