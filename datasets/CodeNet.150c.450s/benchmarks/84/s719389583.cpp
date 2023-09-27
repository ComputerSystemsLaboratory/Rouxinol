#include <cstdio>
using namespace std;

#define MAX_N 500000

long long count = 0;
int A[MAX_N+1];

void merge(int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1+1]; int R[n2+1];
  for(int i=0;i<n1;i++) {
    L[i] = A[left+i];
  }
  for(int i=0;i<n2;i++) {
    R[i] = A[mid+i];
  }
  L[n1] = R[n2] = 0x7FFFFFFF;
  int i = 0; int j = 0;
  for(int k=left;k<right;k++) {
    if(L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }
    else {
      if(i != n1) {
        count += n1 - i;
        // printf("insert(%d)\n",R[j]);
      }
      A[k] = R[j];
      j++;
    }
  }
}

void merge_sort(int left, int right) {
  if(right - left > 1) {
    int mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid, right);
    merge(left, mid, right);
  }
}

int main () {
  int n; scanf("%d",&n);
  for(int i=0;i<n;i++) {
    scanf("%d ",A+i);
  }
  merge_sort(0, n);
  printf("%lld\n",count);
}