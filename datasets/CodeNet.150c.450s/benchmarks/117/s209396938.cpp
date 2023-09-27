#include <bits/stdc++.h>
using namespace std;
#define REP(asd, fgh) for(int asd = 0; asd < fgh; asd++)
int n;
int cnt;
vector<int> S;

void merge(vector<int> &A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1+1), R(n2+1);
  REP(i, n1){
    L[i] = A[left + i];
  }
  REP(i, n2){
    R[i] = A[mid + i];
  }
  L[n1] = INT_MAX/2;
  R[n2] = INT_MAX/2;
  int i = 0, j = 0;
  for(int k = left; k < right; k++){
    cnt++;
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }

}

void mergeSort(vector<int> &A, int left, int right){
  if(left + 1 < right){
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  S.resize(n);
  REP(i, n) cin >> S[i];
  mergeSort(S, 0, n);
  REP(i, n-1){
    cout << S[i] << " ";
  }
  cout << S[n-1] << endl;
  cout << cnt << endl;
  return 0;
}