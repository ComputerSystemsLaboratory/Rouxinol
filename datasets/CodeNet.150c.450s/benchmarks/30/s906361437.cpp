#include <iostream>
#include <vector>
using namespace std;



int main()
{
  vector<int> A;
  int N;
  int sw = 0;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    A.push_back(a);
  }

  for (int i = 0; i < N; i++)
  {
    int mini = i;
    for (int j = i; j < N; j++)
    {
      if (A[j] < A[mini])
      {
        mini = j;
      }
    }
    if (i != mini) sw++;
    int tmp = A[mini];
    A[mini] = A[i];
    A[i] = tmp;
  }

  for (int i = 0; i < N; i++)
  {
    cout << A[i];
    if (i != N-1) cout << ' ';
  }
  cout << endl;
  cout << sw << endl;
}