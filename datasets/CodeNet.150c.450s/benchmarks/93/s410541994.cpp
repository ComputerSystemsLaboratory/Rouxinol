#include <vector>
#include <utility>
#include <cstdio>
#include <iostream>
#define INF (100000000)
using namespace std;
struct Card{
  char c;
  int n;
};

int partition(Card* A, int p, int r){
  int x = A[r].n;
  int i = p-1;
  for (int j = p ; j< r ; j++){
    if (A[j].n <= x){
      i = i+1;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}


void quickSort(Card* A, int p, int r){
  if (p < r){
    int q = partition(A, p ,r);
    quickSort(A, p, q-1);
    quickSort(A, q+1, r);
  }
}

void merge(Card* A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  Card cInf = {' ', INF};
  vector<Card> L(n1+1), R(n2+1);
  for( int i = 0; i < n1 ; ++i)
    L[i] = A[left + i] ;
  for( int i = 0; i < n2 ; ++i)
    R[i] = A[mid + i];
  L[n1] = cInf;
  R[n2] = cInf;
  int i = 0, j = 0;
  for (int k = left ; k < right ; ++k){
    if (L[i].n <= R[j].n){
      A[k] = L[i];
      i = i + 1;
    }
    else {
      A[k] = R[j];
      j = j + 1;
    }
  }
}

void mergeSort(Card* A, int left, int right){
  if (left+1 < right){
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(){
  int n;
  Card A[100000], B[100000];
  cin >> n;
  for(int i=0;i<n;++i){
    cin >> A[i].c >> A[i].n;
    B[i] = A[i];
  }
  quickSort(A, 0, n-1);
  mergeSort(B, 0, n);
  bool flag = false;
  for (int i=0;i<n && !flag;++i)
    if (A[i].c != B[i].c) flag = true;

  cout << (!flag?"Stable":"Not stable") << endl;
  for (int i=0;i<n;++i)
    cout << A[i].c << " " << A[i].n << "\n";
  return 0;
}

