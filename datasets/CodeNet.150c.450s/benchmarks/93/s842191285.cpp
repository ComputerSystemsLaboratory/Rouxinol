#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& A,vector<char>& C,int p,int r) {
  int x = A[r];
  int i = p - 1;
  for(int j=p;j<r;j++) {
    if(A[j] <= x) {
      i++;
      swap(A[i],A[j]);
      swap(C[i],C[j]);
    }
  }
  swap(A[i+1],A[r]);
  swap(C[i+1],C[r]);
  return i+1;
}
void quick_sort(vector<int>& A,vector<char>& C,int p,int r) {
  if(p < r) {
    int q = partition(A,C,p,r);
    quick_sort(A,C,p,q-1);
    quick_sort(A,C,q+1,r);
  }
}

// ????????¨
void merge(vector<int>& A,vector<char>& C,int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1+1);
  vector<char> LC(n1+1);
  vector<int> R(n2+1);
  vector<char> RC(n2+1);
  for(int i=0;i<n1;i++) {
    L[i] = A[left+i];
    LC[i] = C[left+i];
  }
  for(int i=0;i<n2;i++) {
    R[i] = A[mid+i];
    RC[i] = C[mid+i];
  }
  L[n1] = 0x7FFFFFFF;
  R[n2] = 0x7FFFFFFF;
  int i = 0; int j = 0;
  for(int k=left;k<right;k++) {
    if(L[i] <= R[j]) {
      A[k] = L[i];
      C[k] = LC[i];
      i++;
    }
    else {
      A[k] = R[j];
      C[k] = RC[j];
      j++;
    }
  }
}
void merge_sort(vector<int>& A,vector<char>& C,int left, int right) {
  if(right - left > 1) {
    int mid = (left + right) / 2;
    merge_sort(A,C,left, mid);
    merge_sort(A,C,mid, right);
    merge(A,C,left, mid, right);
  }
}

bool is_equal(vector<int>& A1,vector<char>& C1,vector<int>& A2,vector<char>& C2,int n) {
  for(int i=0;i<n;i++) {
    if(C1[i] != C2[i]) return false;
    if(A1[i] != A2[i]) return false;
  }
  return true;
}


int main() {
  int n;
  cin >> n;
  vector<int> A(n); vector<char> AC(n);
  vector<int> B(n); vector<char> BC(n);
  for(int i=0;i<n;i++) {
    char c; int num;
    cin >> c >> num;
    A[i] = num; AC[i] = c;
    B[i] = num; BC[i] = c;
  }

  quick_sort(A,AC,0,n-1);
  merge_sort(B,BC,0,n);

  if(is_equal(A,AC,B,BC,n)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i=0;i<n;i++) {
    cout << AC[i] << " " << A[i] << endl;
  }
}