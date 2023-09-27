#include<iostream>
#include<climits>

int count;

void merge(int*, int, int, int);
void mergeSort(int*, int, int);

using namespace std;

int main(){
  int i, n, s_in;
  int l, m, r;
  int S[500000];
  cin >> n;
  for(i=0;i<n;++i) cin >> S[i];
  mergeSort(&S[0], 0, n);

  for(i=0;i<n;++i){
    cout << S[i];
    if(i != n-1) cout << " ";
  }
  cout << "\n" << count << "\n";
  
  return 0;
}

void merge(int* A, int left, int mid, int right){
  int i, j;
  int n1 = mid - left, n2 = right - mid;
  int L[n1], R[n2];
  for(i=0;i < n1;++i) L[i] = A[left+i];
  for(i=0;i < n2;++i) R[i] = A[mid+i];
  L[n1] = INT_MAX, R[n2] = INT_MAX;
  
  i=0, j=0;
  for(int k=left;k < right;++k){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
    count++;
  }
}

void mergeSort(int* A, int left, int right){
  int mid;
  if(left+1 < right){
    mid = (left+right)/2;
    mergeSort(&A[0], left, mid);
    mergeSort(&A[0], mid, right);
    merge(&A[0], left, mid, right);
  }
}

