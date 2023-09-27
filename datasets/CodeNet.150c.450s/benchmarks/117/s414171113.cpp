#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int ans;
void merge(vector<int> &A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1+1), R(n2+1);
  FOR(i,0,n1) L[i] = A[left+i];
  FOR(i,0,n2) R[i] = A[mid+i];
  L[n1] = 2e9;
  R[n2] = 2e9;
  int i = 0;
  int j = 0;
  FOR(k,left,right){
    ans ++;
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    } else {
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
    merge(A,left,mid,right);
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;cin>>n;
  vector<int> A(n);
  FOR(i,0,n) cin>>A[i];
  mergeSort(A, 0, n);
  FOR(i,0,n){
    if(i) cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << ans << endl;
  return 0;
}
