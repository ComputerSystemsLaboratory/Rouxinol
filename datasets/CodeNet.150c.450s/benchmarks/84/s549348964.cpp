#include<iostream>
#include<vector>
#include <limits>

using namespace std;

long long merge(vector<int> &A, int left, int mid, int right){
  int i, j, k;
  long long cnt = 0;
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1+1), R(n2+1);
  for(i = 0; i < n1; i++) L[i] = A[left + i];
  for(i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = R[n2] = numeric_limits<int>::max();  // Be careful not to overflow
  i = j = 0;
  for(k = left; k < right; k++){
    if(L[i] <= R[j]){
      A[k] = L[i++];
    }else{
      A[k] = R[j++];
      cnt += n1 - i;
    }
  }
  return cnt;
}

long long mergeSort(vector<int> &A, int left, int right){
  int mid;
  long long v1, v2, v3;
  if(left + 1 < right){
    mid = (left + right) / 2;
    v1 = mergeSort(A, left, mid);
    v2 = mergeSort(A, mid, right);
    v3 = merge(A, left, mid, right);
    return v1 + v2 + v3;
  }else{
    return 0;
  }
}

int main(){
  int n;
  cin >> n;
  vector<int> A(n);
  for(int i = 0; i < n; i++) cin >> A[i];

  long long ans = mergeSort(A, 0, n);
  cout << ans << endl;

  return 0;
}
