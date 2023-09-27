#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;
const int NMAX = 10000;

void PrintArray(int* A, int N)
{
   cout << A[0]; 
   for (int k = 1; k < N;k++) {
     cout << " " << A[k] ; 
   }
   cout << endl;
}

void Swap(int& a, int &b) {
  int tmpA, tmpB;
  tmpA = a;
  tmpB = b;
  a = tmpB;
  b = tmpA;
}

int selectionSort(int* A, int N){
  int count = 0;
  for (int i = 0; i < N - 1; i++){
    int minj = i;
    for (int j = i+1; j < N; j++) {
      if (A[j] < A[minj]) {
        minj = j;
      }
    }
    Swap(A[i], A[minj]);
    if (i != minj) { 
      count += 1;
    }
  }
  return count;
} 

int main()
{
  int n;
  cin >> n;
  
  int x;
  int array[NMAX]; 
  for (int i = 0; i < n; i++) {
    cin >> x; 
    array[i] = x; 
  }
  int times;
  times = selectionSort(array, n);
  PrintArray(array,n); 
  cout << times << endl;
  return 0;
}