#include <iostream>
using namespace std;

struct Card {
  char suit;
  int value;
};

struct Card L[100000 / 2 + 2], R[100000 / 2 + 2];

void merge(struct Card A[], int n, int left, int mid, int right ) {
  int i,j;
  int n1 = mid - left;
  int n2 = right - mid;
  for ( i = 0; i < n1; i++ ) L[i] = A[left + i];
  for ( i = 0; i < n2; i++ ) R[i] = A[mid + i];  
  L[n1].value = R[n2].value = 10000000;
  i = j = 0;
  for ( int k = left; k < right; k++ ) {
    if ( L[i].value <= R[j].value ) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
  }
}

void mergeSort(struct Card A[], int n, int left, int right) {
  int mid;
  if ( left + 1 < right ) {
    mid = ( left + right ) / 2;
    mergeSort(A, n, left, mid);
    mergeSort(A, n, mid, right);
    merge(A, n, left, mid, right);
  }
}

int partition(struct Card A[], int n, int p, int r) {
  struct Card x;
  int i, j;
  x = A[r];
  i = p - 1;
  for ( j = p; j < r; j++ ) {
    if ( A[j].value <= x.value ) {
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i + 1;
}

void quickSort(struct Card A[], int n, int p, int r) {
  int q;
  if ( p < r ) {
    q = partition(A, n, p, r );
    quickSort(A, n, p, q - 1 );
    quickSort(A, n, q + 1, r );    
  }
}

int main() {
  int n, v;
  struct Card A[100000], B[100000];
  char ch;

  
  //入力
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> ch >> v;
    A[i].suit = B[i].suit = ch;
    A[i].value = B[i].value = v;
  }

  mergeSort(A, n, 0, n);
  quickSort(B, n, 0, n - 1 );

  //安定しているかどうか調べる
  int stable = 1;
  for ( int i = 0; i < n; i++ ) {
    if ( A[i].suit != B[i].suit ) stable = 0;
  }

  if ( stable == 1 ) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

  //出力
  for ( int i = 0; i < n; i++ ) {
    cout << B[i].suit << " " << B[i].value << endl;
  }

}