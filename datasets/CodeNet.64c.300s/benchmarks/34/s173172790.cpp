#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int NMAX = 10000;

void print(int* A, int N)
{
   cout << A[0]; 
   for (int k = 1; k < N;k++) {
     cout << " " << A[k] ; 
   }
   cout << endl;
}

void insertionSort(int* A, int N)
{
  for (int i = 1; i < N; i++) {
    int v = A[i];
    int j = i - 1;
    print(A, N); 
    while (j >= 0 && A[j] > v) 
    {
      A[j+1] = A[j];
      A[j] = v;
      j -= 1;
    }
  }
    print(A, N); 
}


int main()
{
  int n;
  int array[NMAX+1];
  cin >> n;
  for (int i = 0; i < n;i++) {
    int x; 
    cin >> x; 
    array[i] = x; 
  } 
  insertionSort(array, n);
  return 0;
}