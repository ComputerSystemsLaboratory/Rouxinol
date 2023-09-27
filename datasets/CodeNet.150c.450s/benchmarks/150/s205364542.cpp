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

void CountingSort(vector<int> &A, vector<int> &B, int n)
{
  for(int i = 0; i < n; i++) C[A[i]]++;
  for(int i = 1; i <= MAX; i++) C[i] += C[i-1];
  for(int i = n-1; i >= 0; i--)
  {
      B[--C[A[i]]] = A[i];
  }
}

int main()
{
  int n, tmp;
  vector<int> A, B;
  cin >> n;
  A.resize(n+10);
  B.resize(n+10);
  for(int i = 0; i < n; i++) cin >> A[i];
  CountingSort(A, B, n);
  printArr(B, n);
  return 0;
}