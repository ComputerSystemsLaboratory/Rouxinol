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

int bubbleSort(int* A, int N){
  bool flag = true;
  int count = 0;
  while (flag) {
    flag = false;
    for (int i = 0; i < N -1; i++) {
      if (A[i] > A[i+1]) { 
        Swap(A[i], A[i+1]); 
        count += 1;
        flag = true;
      }
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
  times = bubbleSort(array, n);
  PrintArray(array,n); 
  cout << times << endl;
  return 0;
}