#include <cstdio>
#include <iostream>
#include <climits>
#include <cmath>
#include <utility>
#include <vector>

#define MAX 10010

using namespace std;

int C[MAX] = {0};

void printArr(vector<int> &A, int n)
{
  for(int i = 0; i < n-1 ; i++) cout << A[i] << " ";
  cout << A[n-1] << endl;
}

int partition(vector<int> &A, int p, int r)
{
  int x = A[r];
  int i = p-1;
  int tmp;
  for(int j = p; j < r; j++)
  {
    if(A[j] <= x)
    {
      i++;
      tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
    }
  }
  tmp = A[i+1];
  A[i+1] = A[r];
  A[r] = tmp;
  return i+1;
}

int main()
{
  int n;
  vector<int> A;
  cin >> n;
  A.resize(n+1);
  for(int i = 0; i < n; i++) cin >> A[i];
  int pv =  partition(A,0,n-1);
  for(int i = 0; i < n; i++)
    printf("%s%d%s%s",(i==pv?"[":""),A[i],(i==pv?"]":""),(i==n-1?"\n":" "));
  return 0;
}