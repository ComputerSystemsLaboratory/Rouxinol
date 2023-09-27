#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <time.h>
#include <functional>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MOD1 1000000007;
#define MOD2 1000007
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
/* ここからが本編 */
/*  */
int cnt = 0;
void merge(int A[],int left,int mid,int right)
{
  int i,j,k,l;
  int n1 = mid - left;
  int n2 = right - mid;
  static int L[300000];
  static int R[300000];
  rep(i,n1) {
    L[i] = A[left + i];
  }
  rep(i,n2) {
    R[i] = A[mid + i];
  }
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;
  i = 0; j = 0;
  for(k=left;k<right;k++) {
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i = i + 1;
    }
    else {
      A[k] = R[j];
      j = j + 1;
    }
  }
}
void mergeSort(int A[],int left,int right) {
  if (left+1 < right) {
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}
int main(void)
{
  int test = 1;
  int i,j,k,l;
  int n;
  static int A[500000];
  int left,right;
  scanf("%d",&n);
  rep(i,n) {
    scanf("%d",&A[i]);
  }
  mergeSort(A,0,n);
  printf("%d",A[0]);
  REP(i,1,n) {
    printf(" %d",A[i]);
  }
  puts("");
  printf("%d\n",cnt);

  return 0;
}