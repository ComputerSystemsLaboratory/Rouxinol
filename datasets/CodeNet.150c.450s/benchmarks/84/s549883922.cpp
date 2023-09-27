#include<iostream>
#include<algorithm>

#define INFTY 1000000001

using namespace std;

int n, s[200010];
long long cnt;

long long merge(int *A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int i, j;
  cnt = 0;

  //generate L[0...n1], R[0...n2]
  int L[n1 + 10], R[n2 + 10];
  for(i = 0;i < n1;i++) L[i] = A[left + i];
  for(i = 0;i < n2;i++) R[i] = A[mid + i];

  L[n1] = INFTY;
  R[n2] = INFTY;

  i = 0;
  j = 0;

  for(int k = left;k < right;k++){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }else{
      cnt += n1 - i;
      A[k] = R[j];
      j++;
    }
  }

  return cnt;
}

long long mergeSort(int *A, int left, int right){
  long long a, b, c;

  if(left + 1 < right){
    int mid = (left + right) / 2;
    a = mergeSort(A, left, mid);
    b = mergeSort(A, mid, right);
    c = merge(A, left, mid, right);
    return a + b + c;
  }

  return 0;
}

int main(){

  cin >> n;
  for(int i = 0;i < n;i++) cin >> s[i];

  /*mergeSort(s, 0, n);

  for(int i = 0;i < n;i++){
    cout << (i?" ":"");
    cout << s[i];
  }
  cout << endl;*/

  cout << mergeSort(s, 0, n) << endl;

  return 0;
}

