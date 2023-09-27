#include <iostream>
using namespace std;

#define MAX 100
int A[MAX];

int selectionSort(int n){
  int cnt, i, j, swap, minj;
  for (i = 0; i < n; i++){
    minj = i;
    for (j = i; j < n; j++){
      if (A[j] < A[minj])  minj = j;
    }
    swap = A[i];
    A[i] = A[minj];
    A[minj] = swap;
    if (minj != i) cnt++;
  }
  return cnt;
}

int main(){
  int i, j, cnt, n, x;
  cin >> n;
  for (i = 0; i < n; i++) cin >> A[i];
  x = selectionSort(n);
  cout << A[0];
  for (i = 1; i < n; i++) cout << " " << A[i];
  cout << "\n";
  cout << x << "\n";
  return 0;
}
