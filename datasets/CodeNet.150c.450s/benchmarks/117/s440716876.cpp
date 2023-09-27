#include <iostream>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
 
int count = 0;
 
void Merge(int A[], int left, int mid, int right) {
  int i, j, k;
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1+1], R[n2+1];
  rep(i,n1) L[i] = A[left+i];
  rep(i,n2) R[i] = A[mid+i];
  L[n1] = R[n2] = 0x7FFFFFFF;
  i = j = 0;
  for (k = left; k < right; k++) {
    count++;
    if (L[i] < R[j]) { A[k] = L[i]; i++; }
    else { A[k] = R[j]; j++; }
  }
}
 
void MergeSort(int A[], int left, int right) {
  if (left+1 < right) {
    int mid = (left + right) / 2;
    MergeSort(A, left, mid);
    MergeSort(A, mid, right);
    Merge(A, left, mid, right);
  }
} 
 
int main () {
  cin.tie(0); // tie
  ios::sync_with_stdio(false); // sync
  int n, i;
 
  // input
  cin >> n;
  int A[n];
  rep(i,n) cin >> A[i];
  MergeSort(A, 0, n);
 
  // output
  rep(i,n) {
    cout << A[i];
    if (i < n-1) cout << " ";
  }
  cout << endl << count << endl;
  return 0;
}