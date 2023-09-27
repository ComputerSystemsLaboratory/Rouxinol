#include <iostream>
#include <vector>
using namespace std;

inline void swap(int *a, int *b){ int t = *a; *a = *b; *b = t; }
template <class C>
void print_container(C con)
{
  int n=con.size();
  for (int i=0; i<con.size(); i++)
  {
    cout << con[i];
    if (i<n-1) cout << ' ';
  }
  cout << endl;
}

int main()
{
  int n;
  int a;
  vector<int> A;

  cin >> n;
  for (int i = 0; i<n; i++)
  {
    cin >> a;
    A.push_back(a);
  }
  print_container(A);
  for (int i = 1; i<n; i++)
  {
    int key = A[i];
    int j = i-1;
    while ((j>=0) && (A[j]>key))
    {
      A[j+1]=A[j];
      j--;
    }
    A[j+1]=key;
    print_container(A);
  }
  return 0;
}