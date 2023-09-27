#include <iostream>
using namespace std;

struct card{
  char mark;
  int num;
};

int partition(card A[], int p, int r){
  int x = A[r].num;
  int i = p - 1;
  for(int j=p;j<r;j++){
    if(A[j].num <= x){
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i+1;
}

void quicksort(card A[], int p, int r){
  if(p < r){
    int q = partition(A, p, r);
    quicksort(A, p, q-1);
    quicksort(A, q+1, r);
  }
}

const int MAX = 100001;
const int SENTINEL = 2000000000;

card L[MAX/2 + 1], R[MAX/2 + 1];
int cnt;

void merge(card A[], int left, int right, int mid){
  int n1 = mid - left;
  int n2 = right - mid;
  for(int i=0;i<n1;i++) L[i] = A[left + i];
  for(int i=0;i<n2;i++) R[i] = A[mid + i];
  L[n1].num = SENTINEL;
  R[n2].num = SENTINEL;
  int i = 0, j = 0;
  for(int k=left;k<right;k++){
    cnt++;
    if(L[i].num <= R[j].num){
      A[k] = L[i++];
    }
    else{
      A[k] = R[j++];
    }
  }
}

void mergesort(card A[], int left, int right){
  if(right - left > 1){
    int mid = (left + right) / 2;
    mergesort(A, left, mid);
    mergesort(A, mid, right);
    merge(A, left, right, mid);
  }
}

int main(){
  int n;
  cin >> n;
  card A[100001], B[100001];
  for(int i=0;i<n;i++){
    cin >> A[i].mark >> A[i].num;
    B[i].mark = A[i].mark;
    B[i].num = A[i].num;
  }
  bool stable = true;
  quicksort(A, 0, n-1);
  mergesort(B, 0, n);
  for(int i=0;i<n;i++){
    if(A[i].mark != B[i].mark) stable = false;
  }
  if(stable) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i=0;i<n;i++) cout << A[i].mark << " " << A[i].num << endl;
  return 0;
}

